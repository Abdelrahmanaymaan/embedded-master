#include <stdio.h>
#include <stdint.h>

#define SYSCTL_RCC       *(volatile unsigned long*)(0x400FE108)
#define GPIO_portf_DIR   *(volatile unsigned long*)(0x40025400)
#define GPIO_portf_EN    *(volatile unsigned long*)(0x4002551C)
#define GPIO_portf_data  *(volatile unsigned long*)(0x400253FC)



int main(void)
{
   SYSCTL_RCC=0x20;
   GPIO_portf_DIR |= (1<<3);
   GPIO_portf_EN |= (1<<3);
   int i;
   while(1)
   {
	GPIO_portf_data |= (1<<3);
	for(i=0;i<2000;i++);
 
    GPIO_portf_data &= ~(1<<3);
	for(i=0;i<2000;i++);
   }
	
	return 0;
}