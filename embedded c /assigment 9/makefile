CC=arm-none-eabi-
CFLAGS= -g -gdwarf-2 -mcpu=cortex-m4
INCS=-I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: learn-in-depth.bin
	@echo '------------done--------------'


%.o: %.c
	$(CC)gcc.exe -c -mthumb $(CFLAGS) $(INCS) $< -o $@

learn-in-depth.elf: $(OBJ) 
	$(CC)ld.exe -T linker_script.ld  $(OBJ) -o $@ -Map=output.map 
	cp learn-in-depth.elf learn-in-depth.axf

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@
         
clean: 
	rm app.o uart.o startup.o 