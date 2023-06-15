
MEMORY
{
flash (rx) : ORIGIN = 0x8000000, LENGTH = 128M
sram (rwx) : ORIGIN = 0x20000000, LENGTH = 20M
} 
SECTIONS
{
    
    .text :
    {
        *(.vector*) 
        *(.text*)
        *(.rodata)
        . = ALIGN (4) ;
        _E_text = . ;
    }>flash

    .data :
    {
       _S_data = . ;
        *(.data)
        . = ALIGN (4) ;
       _E_data = . ;
    }>sram AT> flash

    .bss :
    {
     _S_bss = . ;
     *(.bss)
      . = ALIGN (4) ;
     _E_bss = . ;
    }>sram
    . = . + 0x1000 ;
    stack_top = . ;
    

}
