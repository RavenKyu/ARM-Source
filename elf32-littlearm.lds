/* 2008.09.10. */
OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(reset_handler)

SECTIONS
{
	.text : { 
		_stext = .;
		*(.text)
		*(.rodata)
		*(.rodata*)
		. = ALIGN(4);
 		_etext = . ;
	}

	/* collect all initialized .data sections that go into FLASH  */
	.data : AT ( ADDR (.text) + SIZEOF (.text) ) { 
		_sdata = .;
		*(.vectors)
		*(.data)
		_edata = .;
	}

	/* collect all uninitialized .bss sections that go into FLASH  */
	.bss (NOLOAD) : { 
		. = ALIGN(4);
		_sbss = .;
		*(.bss)
		_ebss = .;
	}
}
end = .;

