#-----------------------------
# By  WC, 2008.09.10.
#-----------------------------
ifndef ERASE_FCT
ERASE_FCT=rm -rf
endif
ifndef WCCROSS_COMPILE
WCCROSS_COMPILE=arm-elf-
endif

WCTOOL=gcc

WCOUTFILE_SRAM=at91sam7s_sram_wc
WCOUTFILE_FLASH=at91sam7s_flash_wc

WCTARGET=AT91SAM7S256

WCINCL=./include

# Debug Mode
OPTIM=-Os

ifeq ($(WCTOOL), gcc)

AS=$(WCCROSS_COMPILE)gcc
CC=$(WCCROSS_COMPILE)gcc
LD=$(WCCROSS_COMPILE)gcc

OBJCOPY=$(WCCROSS_COMPILE)objcopy
OBJDUMP=$(WCCROSS_COMPILE)objdump

NM= $(WCCROSS_COMPILE)nm
SIZE=$(WCCROSS_COMPILE)size

CCFLAGS=-g -mcpu=arm7tdmi $(OPTIM) -Wall -I$(WCINCL) -D$(WCTARGET)
ASFLAGS=-D__ASSEMBLY__ -D$(WCTARGET) -g -mcpu=arm7tdmi -c $(OPTIM) -Wall -I$(WCINCL)

LDFLAGS+=-nostartfiles -Wl,--cref
LDFLAGS+=-lc -lgcc
LDFLAGS+=-T elf32-littlearm.lds

OBJS=cstartup.o
endif

OBJS+= lowlevel.o \
       main.o \
       LED.o

all: sram flash

rebuild: clean all

sram: $(OBJS)
	$(LD) $(LDFLAGS) -Ttext 0x201000 -Tdata 0x200000 -n -o $(WCOUTFILE_SRAM).elf $(OBJS)
	$(OBJCOPY) --strip-debug --strip-unneeded $(WCOUTFILE_SRAM).elf -O binary $(WCOUTFILE_SRAM).bin

flash: $(OBJS)
	$(LD) $(LDFLAGS) -Ttext 0x100000 -Tdata 0x200000 -n -o $(WCOUTFILE_FLASH).elf $(OBJS)
	$(OBJCOPY) --strip-debug --strip-unneeded $(WCOUTFILE_FLASH).elf -O binary $(WCOUTFILE_FLASH).bin

main.o: main.c
	$(CC) -c $(CCFLAGS) main.c -o main.o

LED.o: LED.c
	$(CC) -c $(CCFLAGS) LED.c -o LED.o	

lowlevel.o: lowlevel.c
	$(CC) -c $(CCFLAGS) lowlevel.c -o lowlevel.o

cstartup.o:  cstartup.S
	$(AS) $(ASFLAGS) cstartup.S -o cstartup.o

clean:
	$(ERASE_FCT) *.o *.bin *.elf *.map
