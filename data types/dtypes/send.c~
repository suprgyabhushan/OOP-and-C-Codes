#include<stdio.h>
int main()


{
enum petrolpumps{ZLINE=0,MPD,QPD};
enum parityTypes{noparity=0,odd,even};

enum petrolpumps using=ZLINE;
enum parityTypes parity=noparity;
int packet=0;
packet=using<<8;
packet=packet|parity;

using=MPD;
parity=noparity;
int packet1=0;
packet1=using<<8;
packet1=packet1|parity;

using=QPD;
parity=noparity;
int packet2=0;
packet2=using<<8;
packet2=packet2|parity;

using=ZLINE;
parity=odd;
int packet3=0;
packet3=using<<8;
packet3=packet3|parity;

using=MPD;
parity=odd;
int packet4=0;
packet4=using<<8;
packet4=packet4|parity;

using=QPD;
parity=odd;
int packet5=0;
packet5=using<<8;
packet5=packet5|parity;


using=ZLINE;
parity=even;
int packet6=0;
packet6=using<<8;
packet6=packet6|parity;

using=MPD;
parity=even;
int packet7=0;
packet7=using<<8;
packet7=packet7|parity;

using=QPD;
parity=even;
int packet8=0;
packet8=using<<8;
packet8=packet8|parity;



/*Sending Data Packets*/
fprintf(stderr,"In send program-Sending the Packet \n");
fprintf(stdout,"%d \n",packet);
fprintf(stdout,"%d \n",packet1);
fprintf(stdout,"%d \n",packet2);
fprintf(stdout,"%d \n",packet3);
fprintf(stdout,"%d \n",packet4);
fprintf(stdout,"%d \n",packet5);
fprintf(stdout,"%d \n",packet6);
fprintf(stdout,"%d \n",packet7);
fprintf(stdout,"%d \n",packet8);
return 1;
}




