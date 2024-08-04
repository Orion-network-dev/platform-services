FROM debian

USER root

RUN apt-get update && \
    apt-get install postfix -y

COPY start /bin/start
ENTRYPOINT /bin/start