# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

import image_pb2 as image__pb2


class RotateStub(object):
  """The rotate service definition.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.rot90 = channel.unary_unary(
        '/Rotate/rot90',
        request_serializer=image__pb2.image.SerializeToString,
        response_deserializer=image__pb2.image.FromString,
        )


class RotateServicer(object):
  """The rotate service definition.
  """

  def rot90(self, request, context):
    """Rotates an image
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_RotateServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'rot90': grpc.unary_unary_rpc_method_handler(
          servicer.rot90,
          request_deserializer=image__pb2.image.FromString,
          response_serializer=image__pb2.image.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'Rotate', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
