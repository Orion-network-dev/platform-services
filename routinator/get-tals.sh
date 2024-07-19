#!/bin/bash

mkdir -p tals/

# Downloads the orion rpki root tal
curl https://rpki.orionet.re/ta/ta.tal -o tals/ta.tal

