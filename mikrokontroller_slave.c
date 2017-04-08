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

UCSR0A=0x00;
UCSR0B=0x10;
UCSR0C=0x06;
UBRR0H=0x00;
UBRR0L=0x67;

ACSR=0x80;

DDRB.5=1; //Jadikan PB.5 sebagai output
PORTB.5=1;//keadaan awal LED menyala
while (1)
      {
      if(getchar()=='a'){ //ketika menerima data serial 'a'
      //toggle LED
        if(PORTB.5==1)PORTB.5=0;
            else      PORTB.5=1;
            }
      }

}

