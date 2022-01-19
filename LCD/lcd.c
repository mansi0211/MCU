#include<reg51.h>
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void main()
{
	P2=0x00;//  output declaration,data lines d0-d7 connected with P2 
	while(1)
	{
		lcdcmd(0x38);//5x7 matrix crystal
		delay();
		lcdcmd(0x01);//clear screen
		delay();
		lcdcmd(0x10);//cursor blinking
		delay();
		lcdcmd(0x0c);//display on
		delay();
		lcddat('E');
		delay();
		lcddat('M');
		delay();
		lcddat('B');
		delay();
	}
}
void lcdcmd(unsigned char val)
{
	P2=val;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;	
}
void lcddat(unsigned char val)
{
	P2=val;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
}
void delay()
{
	unsigned int i;
	for(i=0;i<12000;i++);
}