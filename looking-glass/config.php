<?php

/*
 * Main configuration file example.
 *
 * DO NOT EDIT NOR RENAME, please copy to 'config.php' and edit the new file!
 */

// People to contact
// Set both to null to not display any contact information
$config['contact']['name'] = 'Orion Administrator - Matthieu Pignolet';
$config['contact']['mail'] = 'orion+lg@mpgn.dev';

$config['frontpage']['color_mode_enabled'] = true;
$config['frontpage']['title'] = 'Orion Looking Glass';
$config['frontpage']['image'] = 'logo.png';
$config['frontpage']['disclaimer'] = 'This is from the orion signaling server.';

$config['routers']['router1']['host'] = 'ns0.orionet.re';
$config['routers']['router1']['user'] = 'lg';
$config['routers']['router1']['auth'] = 'ssh-key';
$config['routers']['router1']['type'] = 'frr';
$config['routers']['router1']['desc'] = 'Orion Signaling Server (ns0.orionet.re)';
$config['routers']['router1']['bgp_detail'] = true;
$config['routers']['router1']['private_key'] = '/keys/signaling_key';
$config['routers']['router1']['disable_ipv6'] = true;

$config['tools']['ping_options'] = '-c 10';
$config['tools']['traceroute_options'] = '-A -q1 -w2 -m15';
$config['tools']['traceroute6'] = 'traceroute6';
$config['tools']['traceroute4'] = 'traceroute';

// Enables VRF subsystem
$config['vrfs']['enabled'] = false;
$config['misc']['allow_private_asn'] = true;
$config['misc']['allow_reserved_ip'] = true;

$config['antispam']['enabled'] = true;
$config['antispam']['database_file'] = 'looking-glass.db';


$config['output']['show_command'] = true;
$config['output']['scroll'] = true;
// End of config.php