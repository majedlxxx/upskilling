# Mr robot

### Ping test
pingable


### port scanning
* sudo nmap $ip -p- -sS > tcpPorts
* sudo nmap $ip -sU  => no udp ports found
* sudo nmap $ip -sV -A -O -p 22,80,443


    PORT    STATE  SERVICE
    22/tcp  closed ssh
    80/tcp  open   http
    443/tcp open   https

Ports 80/443 run the same website.
wordpress site
Wordpress admin account:
    elliot:ER28-0652
    

found directories:
    http://10.10.89.153/0/ => blog
    http://10.10.89.153/admin/index.html => the page keeps reloading
    http://10.10.89.153/index.html => the page keeps reloading
    http://10.10.89.153/atom =>  xml file
    http://10.10.89.153/audio/ => forbidden
    http://10.10.89.153/css/ => forbidden
    http://10.10.89.153/dashboard => redirects to login page
    http://10.10.89.153/feed/ => xml file
    http://10.10.89.153/hta => blog
    http://10.10.89.153/image/ => blog
    http://10.10.89.153/Image/ => post with an image
    http://10.10.89.153/images/ => forbidden
    http://10.10.89.153/intro => video
    http://10.10.89.153/license => what you do just pull code from Rapid9 or some s@#% since when did you become a script kitty?
    do you want a password or something?
    ZWxsaW90OkVSMjgtMDY1Mgo=     ----   elliot:ER28-0652 => upload php => reverse shell
    http://10.10.89.153/phpmyadmin => For security reasons, this URL is only accessible using localhost (127.0.0.1) as the hostname.
    http://10.10.89.153/feed/rdf/ => XML file
    http://10.10.89.153/readme => I like where you head is at. However I'm not going to help you. 
    http://10.10.89.153/robots.txt => fsocity.dic: word list
                                      key-1-of-3.txt: 073403c8a58a1f80d943455fb30724b9
    10.10.89.153/rss => xml files  
    10.10.89.153/rss2 => xml files
    http://10.10.89.153/sitemap => empty page
    http://10.10.89.153/sitemap.xml => parsing error
    http://10.10.89.153/xmlrpc/ => XML-RPC server accepts POST requests only.







