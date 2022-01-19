#include <at89c51xd2.h>
void  my_delay()
{
	int i;
	for(i=0;i<10000;i++);
}

void main ()
{
	int sin_val[12] = (128,192,238,255,238,192,120,64,17,0,17,64);
	P1 = 0X00; //CONVERT PORT P1 AS OUTPUT
	while(1)
	{
	 	P1 = 0XFF; //TURN ON ALL 8 LEDS FROM P1
		my_delay();
	 	P1 = 0X00; //TURN OFF ALL 8 LED'S FROM P1
		my_delay();
	}
}	

