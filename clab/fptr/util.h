#include<stdio.h>
int encode(int,char,int);
int decode(int);
int process(int a,char sign, int b )
{
	int c;
	int d,e,f,g,h,i;
	e=a&0x11;
	g=a>>31;
	h=g<<31;
	a=decode(a);
	b=decode(b);
	c=encode((int)a,sign,(int)b);
	d=c<<2;
	f=e|d;
	i=f|h;
	printf("%d\n",i);
	return 0;

}
int decode(int x)
{
	int y=0;
	y=x>>2;
	x=y;
	y=x&(0xfffffff);
	return y;
}
int encode(int x,char array,int y)
{
	if (array=='+')
		return x+y;
	if (array=='-')
		return x-y;
	if (array=='*')
		return x*y;
	if (array=='/')
		return x/y;
}
