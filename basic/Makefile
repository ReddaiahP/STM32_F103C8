CC	= arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy

CFLAGS 	= -mcpu=cortex-m3 -mthumb -nostdlib

all: firmware.bin

firmware.elf: startup.s main.c linker.ld

	$(CC) $(CFLAGS) -T linker.ld startup.s main.c -o firmware.elf

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary firmware.elf firmware.bin

clean:
	rm -f firmware.elf firmware.bin

