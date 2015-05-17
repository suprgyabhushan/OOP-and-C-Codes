#include<stdio.h>
int main( int argc , char *argv[])
{
int a;
a=atoi(argv[1]);

if (a==0)
{
printf("Select menu \n");
printf("0x01: multiplexer \n");
printf("0x02: demultiplexer \n");
printf("0x04: encoding \n");
printf("0x08: decoding \n");
printf("0x10: dma \n");
printf("0x20: rma \n");
printf("0x40: updating-cache \n");
printf("0x80: recent-memory-search \n");
}

if ((a & 0x01) == 0x01)
{
printf("Multiplexer selected \n");
}


if ((a & 0x02) == 0x02)
{
printf("Demultiplexer selected \n");
}


if ((a & 0x04) == 0x04)
{
printf("Encoding selected \n");
}


if ((a & 0x08) == 0x08)
{
printf("Decoding selected \n");
}


if ((a & 0x10) == 0x10)
{
printf("Dma selected \n");
}


if ((a & 0x20) == 0x20)
{
printf("Rma selected \n");
}


if ((a & 0x40) == 0x40)
{
printf("Updating-Cache selected \n");
}


if ((a & 0x80) == 0x80)
{
printf("Recent-Memory-Search selected \n");
}




return 0;
}
