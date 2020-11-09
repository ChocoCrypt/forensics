netstat -a > netstat.txt
date > date.txt
cat /proc/version > version.txt
cat /proc/uptime > uptime.txt
netstat -l -p > netstat2.txt
history > historial.txt
df -k > df.txt

#ahora comprimo todo
zip -r evidence.zip .

#ahora muestro los procesos
top
