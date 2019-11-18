#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
#define bucketSize 512

void bktInput(int a,int b) {
if(a>bucketSize)
cout<<"\n\t\tBucket overflow\n";
else {
usleep(500);
while(a>b){
cout<<"\n\t\t"<<b<<" bytes outputted.";
a-=b;
usleep(500);
}
if (a>0) cout<<"\n\t\tLast "<<a<<" bytes sent\t";
cout<<"\n\t\tBucket output successful\n";
}
}

int main( ) {
int op, pktSize;
srand(time(0));
//randomize();
cout<<"Enter output rate : "; cin>>op;
for(int i=1;i<=5;i++){
usleep(rand()%1000);
pktSize=rand()%1000;
cout<<"\nPacket no "<<i<<"\tPacket size = "<<pktSize;
bktInput(pktSize,op);
}
return 0;
}
/*
Enter output rate : 100

Packet no 1     Packet size = 335
                100 bytes outputted.
                100 bytes outputted.
                100 bytes outputted.
                Last 35 bytes sent
                Bucket output successful

Packet no 2     Packet size = 257
                100 bytes outputted.
                100 bytes outputted.
                Last 57 bytes sent
                Bucket output successful

Packet no 3     Packet size = 377
                100 bytes outputted.
                100 bytes outputted.
                100 bytes outputted.
                Last 77 bytes sent
                Bucket output successful

Packet no 4     Packet size = 2
                Last 2 bytes sent
                Bucket output successful

Packet no 5     Packet size = 565
                Bucket overflow
*/