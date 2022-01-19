#include <at89c51xd2.h>

void my_delay()
{
	int i;
	for(i=0;i<=10000;i++);
}
void main()
{
	P1 = 0X00;
	while(1)
	{
		P1 = 0XFF;
		my_delay();
		P1 = 0X00;
		my_delay();
	}
}