#include <at89c51xd2.h>
#include <stdio.h>
unsigned int k[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int s;
void MYDEL();
int main()
{
	P1 = 0x00;
	
	while(1)
	{
		for(s=0;s<10;s++)
		{
			P1 = k[s];
			MYDEL();
			MYDEL();
		}
	}
	
}

void MYDEL()
{
	int i;
	for(i=0;i<20000;i++);
	return;
}