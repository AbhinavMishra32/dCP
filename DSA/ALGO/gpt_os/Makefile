all: gpt_os.img

gpt_os.img: bootloader/bootloader.bin kernel/kernel.bin
	cat bootloader/bootloader.bin kernel/kernel.bin > gpt_os.img

bootloader/bootloader.bin: bootloader/boot.asm
	nasm -f bin $< -o $@

kernel/kernel.bin: kernel/kernel.c linker.ld
	gcc -ffreestanding -c $< -o kernel/kernel.o
	ld -T linker.ld kernel/kernel.o -o kernel/kernel.bin

clean:
	rm -f bootloader/bootloader.bin kernel/kernel.o kernel/kernel.bin gpt_os.img

