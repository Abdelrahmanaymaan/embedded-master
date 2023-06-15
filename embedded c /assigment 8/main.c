#include <stdio.h>
#include <stdint.h>
#define uvint  volatile unsigned int

# define APV2ENR      *(volatile unsigned int*)(0x40021000+0x18)
# define RCC_enable   (1<<2)

#define GPIO_ODR     (0x40010800+0x0c)
#define GPIO_CRH     *(volatile unsigned int*)(0x40010800+0x04)

typedef union{
	uvint allports;
	struct{
         uvint allport:13;
		 uvint pin13:1;
	}pins;

}pins;

int arr []={1,2,3};
int main(void)

{

	APV2ENR |=RCC_enable;
	GPIO_CRH &=0xfff0fffff;
	GPIO_CRH |=0xfff2fffff;
	volatile pins *P_port=(volatile pins *)GPIO_ODR;
	while(1){
	P_port->pins.pin13=0;
	int i;
	for( i=0;i<500000;i++);
	P_port->pins.pin13=1;
	for( i=0;i<500000;i++);
	}
	for(;;);
}
