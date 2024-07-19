#!/bin/bash

rm *.signed

cp db.orionet.re _ps

for key in `ls Korionet.re*.key`
do
echo "\$INCLUDE $key">> _ps
done

dnssec-signzone -A -3 $(head -c 1000 /dev/random | sha1sum | cut -b 1-16) -N INCREMENT -o orionet.re -t _ps
rm _ps
mv _ps.signed db.orionet.re.signed
