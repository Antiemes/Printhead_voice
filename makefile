CC=avr-gcc
OBJCOPY=avr-objcopy

CFLAGS=-Os -DF_CPU=16000000UL -mmcu=atmega32u4 -O3 -lm -Wl,-Map=main.map,--cref -Wl,--gc-sections -Wl,--relax
PORT=/dev/ttyACM0

main.hex: main.elf
	${OBJCOPY} -O ihex -R .eeprom main.elf main.hex

main.elf: main.o
	${CC} -o main.elf main.o -lm -Wl,-Map=main.map,--cref -Wl,--gc-sections -Wl,--relax -mmcu=atmega32u4

clean:
	rm main.o main.elf main.hex

flash: main.hex
	#echo "Press reset."
	#while [ -e ${PORT} ] ;  do true ; done
	while [ ! -w ${PORT} ] ; do true ; done
	avrdude -p atmega32u4 -c avr109 -b 57600 -D -P ${PORT} -U flash:w:main.hex:i
	
