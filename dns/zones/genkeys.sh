#!/bin/sh

dnssec-keygen -a ECDSA384 -b 2048 -n ZONE orionet.re
dnssec-keygen -f KSK -a ECDSA384 -b 4096 -n ZONE orionet.re
