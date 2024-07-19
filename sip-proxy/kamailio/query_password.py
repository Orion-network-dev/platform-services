import argparse
import dns.query
import dns.name
import dns.message
import dns.rdatatype
import dns.flags
import dns.resolver
import random

resolver = dns.resolver.Resolver()

def main():
    parser = argparse.ArgumentParser(
        description="A simple program to query DNS servers while forcing dnssec"
    )

    parser.add_argument(
        "--id",
        type=int,
        help="The id of the orion member to query",
        required=True,
    )

    args = parser.parse_args()
    qname = dns.name.from_text(f"_password.sip.{args.id}.orionet.re")
    q = dns.message.make_query(qname, dns.rdatatype.TXT, want_dnssec=True)

    ns = random.choice(resolver.nameservers)
    ns = "1.1.1.1"
    response = dns.query.udp(
        q,
        ns,
    )

    if response.rcode() != 0 or (response.flags & dns.flags.AD == 0):
        return

    txts = [t for t in response.answer if t.rdtype == dns.rdatatype.TXT]

    if len(txts) == 1:
        items = txts[0]
        if len(items) == 1:
            print(str(list(items)[0])[1:-1])


if __name__ == "__main__":
    main()
