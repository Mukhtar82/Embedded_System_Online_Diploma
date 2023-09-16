/* linker script CortexM3
Eng.Mukhtar
*/

MEMORY
{
flash(RX) : ORIGIN =0x00000000, LENGTH = 512M
sram(RWX) : ORIGIN =0x20000000, LENGTH = 512M

}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = . ;
	}> flash

	.data : {
		_S_DATA = . ;
		*(.vectors)
		. = ALIGN(4) ;
		_E_DATA = . ;
		

	}> sram AT> flash
	
	.bss : {
		. = ALIGN(4) ;
		_S_bss = . ;
		*(.bss)
		_E_bss = . ;
	}> sram

}