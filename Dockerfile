FROM ubuntu:22.04
WORKDIR /app
RUN export DEBIAN_FRONTEND=noninteractive && \
    apt-get update && \
    apt-get install -y cmake clang clang-format
COPY . .
RUN cmake -B build -S . && \
    cmake --build build
CMD [ "build/bin/MyProject" ]
