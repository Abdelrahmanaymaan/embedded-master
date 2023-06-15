/*startup .c*/

# include "stdint.h"

void reset();
void nmt_handler()__attribute__((weak,alias("default_handler")));;
void h_fault()__attribute__((weak,alias("default_handler")));;
void mm_fault()__attribute__((weak,alias("default_handler")));;
void bus_fault()__attribute__((weak,alias("default_handler")));;
void usage_fault()__attribute__((weak,alias("default_handler")));;


extern unsigned int stack_top;

uint32_t vectors[]__attribute__((section(".vector")))={
    (uint32_t) &stack_top,
    (uint32_t) &reset ,
    (uint32_t) &nmt_handler,
    (uint32_t) &h_fault,
    (uint32_t) &mm_fault,
    (uint32_t) &bus_fault,
    (uint32_t) &usage_fault,

};
extern unsigned int _E_text ;
extern unsigned int _S_data ;
extern unsigned int _E_data ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;








void default_handler (){
    reset();
}
void reset ()
{
unsigned int data_size=(unsigned char*)& _E_data - (unsigned char*) & _S_data;
unsigned char *P_src=(unsigned char*) & _E_text;
unsigned char *P_dst=(unsigned char*) & _S_data;
int i ;
for( i = 0 ; i < data_size ; i ++)
{
    *((unsigned char*)P_dst++)=*((unsigned char*)P_src++);
}


unsigned int bss_size=(unsigned char*) & _E_bss-(unsigned char*) & _S_bss;
unsigned char *P_dst1=(unsigned char*) &_S_bss;
for( i=0; i<bss_size;i++)
{
    *((unsigned char*)P_dst1++)=0;
}

    main();
}