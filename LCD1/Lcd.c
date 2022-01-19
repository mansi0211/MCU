#include<reg51.h>
#include<stdio.h>

void lcdinit();
void lcdcmnd(unsigned char x);
void lcddata(unsigned char y);
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
void delay(int m, int n);
void main()
{
	unsigned char t[5]="MANSI";
	unsigned char r[15]="MICROCONTROLLER",i;
	P3=0x00;
	P2=0x00;
	lcdcmnd(0x38);
	delay(2,2);
	lcdcmnd(0x0e);
	delay(2,2);
	lcdcmnd(0x06);
	delay(2,2);
	lcdcmnd(0x085);
	delay(2,2);
	for(i=0;i<5;i++)
	{
		lcddata(t[i]);
		delay(5,1);
	}
	lcdcmnd(0xC0);
	delay(2,2);
	for(i=0;i<15;i++)
	{
		lcddata(r[i]);
		delay(5,1);
	}
}
void delay(int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			}
		}
	}
}
void lcdcmnd(unsigned char x)
{
	P3=x;
	rs=0;
	rw=0;
	en=1;
	delay(2,2);
	en=0;	
}
void lcddata(unsigned char y)
{
	P3=y;
	rs=1;
	rw=0;
	en=1;
	delay(2,2);
	en=0;
}
