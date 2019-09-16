from socket import*
clientPort=12000
clientName='10.124.7.87'
clientSocket=socket(AF_INET,SOCK_STREAM)
clientSocket.connect((clientName,clientPort))
sentence=input('enter file name')
clientSocket.send(sentence.encode())
filecontents=clientSocket.recv(1024).decode()
print('from server',filecontents)
clientSocket.close()
