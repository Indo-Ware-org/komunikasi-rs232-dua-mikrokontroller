#include <mega328p.h>
#include <stdio.h>
#include <delay.h>

void main(void){
#pragma optsize-
CLKPR=0x80;
CLKPR=0x00;
#ifdef _OPTIMIZE_SIZE_
#pragma optsize+
#endif

//UART Transmit Only 9600bps
UCSR0B=0x08;
UCSR0C=0x06;
UBRR0L=0x67;

ACSR=0x80;

PORTD.2=1; // Pull Up pin sebagai push button
while (1)
      {
      if(!PIND.2){ //ketika tombol ditekan
      putchar('a');delay_ms(500); //kirim karakter 'a'
      }

      }
}
