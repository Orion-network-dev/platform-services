$TTL 2d ; Default TTL for zone
$ORIGIN 0.30.10.in-addr.arpa.

@   IN  SOA ns.orionet.re.  matthieu.matthieu-dev.xyz. (
    0   ; serial number
    12h ; refresh
    15m ; update retry
    3w  ; expiry
    2h  ; minimum
    )
@   IN  NS      nsx1.orion.matthieu-dev.xyz.
@   IN  NS      nsx2.orion.matthieu-dev.xyz.

1   IN  PTR dns.orionet.re.
2   IN  PTR rpki.orionet.re.
3   IN  PTR sip.orionet.re.
4   IN  PTR routinator.orionet.re.
