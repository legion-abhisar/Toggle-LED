#include<reg51.h>
void main ()
{
unsigned char x,y;
unsigned int i;
P1=0x00; //output configuration
while(1) 
	{
  x=0x01; //00000001 b
  for(y=0;y<8;y++)
	  {
	   P1 = x;
			for(i=0;i<60000;i++);
			x=x<<1;
	  }
  }	
}