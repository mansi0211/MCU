
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
	 	P1 = 0XF0; //Display binary pattern as 11110000 on Port P1
	 	my_delay();
	 	P1 = 0x00;
	 	my_delay();
	 }
  }

