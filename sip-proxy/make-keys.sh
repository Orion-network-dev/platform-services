#!/bin/bash

echo -n "aes.key = \"" > kamailio/aes_conf.cfg
openssl rand -base64 256 | openssl base64 -A >> kamailio/aes_conf.cfg
echo "\"" >> kamailio/aes_conf.cfg
