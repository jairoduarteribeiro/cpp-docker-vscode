FROM ubuntu:22.04

WORKDIR /app

RUN export DEBIAN_FRONTEND=noninteractive && \
    apt-get update && \
    apt-get install -y cmake clang clangd clang-format python3-pip git vim bash-completion && \
    rm -rf /var/lib/apt/lists/* && \
    groupadd -g 1000 developer && \
    useradd -l -u 1000 -g developer developer -m -d /home/developer -s /bin/bash && \
    chown -R developer:developer /home/developer /app && \
    pip3 install pre-commit

USER developer
