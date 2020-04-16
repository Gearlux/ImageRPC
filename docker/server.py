#!/usr/bin/env python

from concurrent import futures
import time
import logging

import grpc
import cv2
import numpy as np

import image_pb2
import image_pb2_grpc

_ONE_DAY_IN_SECONDS = 60 * 60 * 24


class Rotater(image_pb2_grpc.RotateServicer):

    def rot90(self, request, context):
        img = cv2.imdecode(np.frombuffer(request.png,dtype=np.byte),cv2.IMREAD_COLOR)
        phot90 = cv2.rotate(img, cv2.ROTATE_90_CLOCKWISE)

        r, buf = cv2.imencode(".png", phot90)
        return image_pb2.image(png = buf.tobytes())


def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    image_pb2_grpc.add_RotateServicer_to_server(Rotater(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    try:
        while True:
            time.sleep(_ONE_DAY_IN_SECONDS)
    except KeyboardInterrupt:
        server.stop(0)

logging.basicConfig()
serve()