# nostromo_nhttpd
This is a vuln webserver for my pentest lab, the webserver uses nostromo 1.9.6 http://www.nazgul.ch/dev/nostromo-1.9.6.tar.gz 
To exploit, you can use https://www.exploit-db.com/raw/47837
# Configure nhttpd
In the config file, The user option cannot be root. My system is Ubuntu, so the web daemon user is called www-data. On CentOS, it would be daemon.

In addition, you may need to chmod the /var/nostromo/logs directory with all permissions (777).

Then, depending on your system, you start the server as a non-root user with sudo privileges like so:

$ sudo nhttpd

or

$ sudo /usr/local/sbin/nhttpd
If you try to enable IPv6 with the -4 flag, it will complain.

# To build
Make sure build-essential and libssl-dev are installed
`apt update`
`apt install build-essential libssl-dev -y`

Build
`make`
`make install`

Easy clap
