#include "stdio.h"
#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:abdelrahman";
void main(void)
{
Uart_send_string((unsigned char*)string_buffer);

}