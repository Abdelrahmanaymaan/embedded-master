#include "stdio.h"
#include "Uart.h"
#define UARTDR *(volatile unsigned int* const)((volatile unsigned int*)0x101f1000)
void Uart_send_string(unsigned char* P_tx)
{
while(*P_tx != 0)
{
    UARTDR=(unsigned int) *P_tx;
    P_tx++;
}


}