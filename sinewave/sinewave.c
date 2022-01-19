#include <at89c51xd2.h>
#include <intrins.h>

void main()
{
	int sin_val[12] = {128,192,238,255,238,192,120,64,17,0,17,64};
	int i;
	P1 = 0x00; //use p1 as output
	while(1)
	{
		
		for(i=0;i<12;i++)
		{
			P1 = sin_val[i];
			_nop_();
			_nop_();
		
		}
	}
}