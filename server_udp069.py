from socket import *
serverport = 12000
serverSocket = socket(AF_INET,SOCK_DGRAM)
serverSocket.bind(("10.124.7.87",serverport))
print("the server is ready to receive")
while 1:
    Sentence,cliaddr=serverSocket.recvfrom(2048)
    file1=open(Sentence,"r")
    l=file1.read(2048)
    serverSocket.sendto(bytes(l,"utf-8"),cliaddr)
    print("sent back to client",l)
    file1.close()
