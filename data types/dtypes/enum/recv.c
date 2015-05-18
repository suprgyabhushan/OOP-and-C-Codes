#include<stdio.h>
void packetIdentify(int data)

{
enum petrolpumps {ZLINE=0,MPD,QPD};
enum parityTypes {noparity = 0, odd, even};
int pumps=0, par=0;
par = data & 0xff;
pumps = data >> 8;

if(pumps == ZLINE)
fprintf(stderr,"ZLINE pumps \n");
else if(pumps == MPD)
fprintf(stderr,"MPD pumps \n");
else if(pumps == QPD)
fprintf(stderr,"QPD pumps \n");
else
fprintf(stderr,"Not specified\n");

if(par == noparity)
fprintf(stderr,"No parity was used\n");
else if(par == odd)
fprintf(stderr,"Odd parity was used\n");
else if(par == even)
fprintf(stderr,"Even parity was used\n");
else
fprintf(stderr,"None parity specified\n");
}

int main()
{
int packetrecv,packetrecv1,packetrecv2,packetrecv3,packetrecv4,packetrecv5,packetrecv6,packetrecv7,packetrecv8;
fscanf(stdin,"%d",&packetrecv);
fscanf(stdin,"%d",&packetrecv1);
fscanf(stdin,"%d",&packetrecv2);
fscanf(stdin,"%d",&packetrecv3);
fscanf(stdin,"%d",&packetrecv4);
fscanf(stdin,"%d",&packetrecv5);
fscanf(stdin,"%d",&packetrecv6);
fscanf(stdin,"%d",&packetrecv7);
fscanf(stdin,"%d",&packetrecv8);


fprintf(stderr,"In recv program, Receiving the packet\n");
packetIdentify(packetrecv);
packetIdentify(packetrecv1);
packetIdentify(packetrecv2);
packetIdentify(packetrecv3);
packetIdentify(packetrecv4);
packetIdentify(packetrecv5);
packetIdentify(packetrecv6);
packetIdentify(packetrecv7);
packetIdentify(packetrecv8);
}



