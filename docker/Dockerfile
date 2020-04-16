FROM python:3

RUN pip install grpcio
RUN pip install opencv-python
RUN pip install protobuf

WORKDIR    /app
COPY       *.py /app/
RUN        chmod a+x server.py

ENTRYPOINT ["./server.py"]

EXPOSE 5556 50051