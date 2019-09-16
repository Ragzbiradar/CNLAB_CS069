from socket import *
ServerName = "10.124.7.87"
Serverport= 1200
clientsocket=socket(AF_INET,SOCK_DGRAM)
sentence=input('enter file name')
clientsocket.sendto(bytes(sentence,"utf-8"),(ServerName,Serverport))
filecontents,seraddr=clientsocket.recvfrom(2048)
print("from server:",filecontents)
clientsocket.close()
