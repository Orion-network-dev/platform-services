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

dns.internal	IN	A	10.30.0.1
rpki.internal	IN	A	10.30.0.2

pki	IN	CNAME	ns0
reg	IN	CNAME	ns0

reg4	IN	A	194.163.144.50

