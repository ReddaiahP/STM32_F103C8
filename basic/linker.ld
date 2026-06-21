MEMORY{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K
	RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

_estack = ORIGIN(RAM)+LENGTH(RAM);

SECTIONS
{
	.text :
	{
		*(.isr_vector)
		*(.text*)
		*(.rodata*)
	} > FLASH

	.data :
	{
		*(.data*)
	} > RAM

	.bss :
	{
		*(.bss*)
		*(COMMON)
	} > RAM
}
