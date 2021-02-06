# nostromo_nhttpd
This is a vuln webserver for my pentest lab, the webserver uses nostromo 1.9.6 http://www.nazgul.ch/dev/nostromo-1.9.6.tar.gz 
To exploit, you can use https://www.exploit-db.com/raw/47837

In the config file, The user option cannot be root. My system is CentOS, so the web daemon user is called daemon. On Debian, it would be www-data.

In addition, you may need to chmod the /var/nostromo/logs directory with all permissions (777).

Then, depending on your system, you start the server as a non-root user with sudo privileges like so:

$ sudo nhttpd

or

$ sudo /usr/local/sbin/nhttpd
If you try to enable IPv6 with the -4 flag, it will complain.
