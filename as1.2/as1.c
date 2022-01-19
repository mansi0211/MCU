#include <at89c51xd2.h>
 my_delay()
{
	  int i;
	  for(i=0;i<10000;i++);
}
void main(void)
{
	  P1= 0X00;
 while(1)
	 {
		unsigned char j;
		for(j=0;j<255;j++)
			P1 = j;
			my_delay();
	 }
}
