#include <avr/io.h>
void main()
{
char i;
DDRD=16;
DDRC=01;
while(1)
   {
     PD4_bit=1;
     Delay_ms(1);
     PD4_bit=0;
          for(i=0;9PIND &128)==0;i++)
              {
                 Delay_us(200);
               }
       i=i*1000;
       PC0_bit=1;
       Delay_ms(i);
       PC0_bit=0;
      }
}
