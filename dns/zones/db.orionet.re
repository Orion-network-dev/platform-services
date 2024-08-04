$TTL 2d ; Default TTL for zone
$ORIGIN orionet.re.

@   IN  SOA ns.orionet.re.  orion.mpgn.dev. (
    0   ; serial number
    12h ; refresh
    15m ; update retry
    3w  ; expiry
    2h  ; minimum
    )

@	IN	NS	ns0.orionet.re.
@	IN	NS	ns1.orionet.re.

; Glue record for the orion ns
ns0      IN	A	194.163.144.50
ns0	 IN	AAAA	2a02:c206:2201:3371::1

ns1      IN     A       194.163.144.50
ns1      IN     AAAA    2a02:c206:2201:3371::1

mail     IN     A       194.163.144.50
mail     IN     AAAA    2a02:c206:2201:3371::1 

pki	IN	CNAME	ns0
reg	IN	CNAME	ns0

reg4	IN	A	194.163.144.50

_github-pages-challenge-orion-network-dev.apt IN TXT "a9b0c25d4e0483e2e143c45eb1cc5a"

1.orionet.re. IN NS ns0.orionet.re.
1.orionet.re. IN NS ns1.orionet.re.
1.orionet.re. IN DS 45616 13 2 A7B7F2552932F87D4D4D1C2972DB6150CB03848991040161D26F4D80A7D76FFF

$INCLUDE pro-db.orionet.re
