#!/bin/bash

rm *.{private,key}

rm -rf *.orionet.re
echo "" > dsset/records.dsset
mkdir dsset
touch dsset/records.dsset
for i in {0..255}
do
dnssec-keygen -a ECDSA384 -b 2048 -n ZONE $i.orionet.re
echo "$i.orionet.re. IN NS ns0.orionet.re." >> "$(pwd)/dsset/records.dsset"
echo "$i.orionet.re. IN NS ns1.orionet.re." >> "$(pwd)/dsset/records.dsset"
done

for filename in ./*.key; do
dnssec-dsfromkey "$filename" >> "$(pwd)/dsset/records.dsset"
done