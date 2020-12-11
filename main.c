#define F_CPU 16000000UL

#include <avr/pgmspace.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/power.h>
#include <avr/interrupt.h>

#include <avr/wdt.h>
#include <avr/power.h>
#include <string.h>
#include <stdio.h>

#include "notes.h"
#include "note_table.h"

volatile uint16_t ddsAdder0=0;
volatile uint16_t ddsAdder1=0;
volatile uint16_t timeout0=0;
volatile uint16_t timeout1=0;

void toggle();

void timerInit(void)
{
  cli();
  OCR0A=249; // Counting up to 250, generates 64000 interrupts / sec
  //OCR0B=250; // Counting up to 250, generates 64000 interrupts / sec
	TCCR0A=_BV(WGM01); // CTC mode
  //TCCR0B=_BV(CS01) | _BV(CS00);
  TCCR0B=_BV(CS00); // No prescaler
  //TCCR0B=_BV(CS01); // div8 prescaler
  sei();
}

void timerStart(void)
{
  cli();
  TCNT0=0;
  //TIMSK0 |= _BV(TOIE1);
  TIMSK0 |= _BV(OCIE0A);
  sei();
}

void timerStop(void)
{
  cli();
  TIMSK0 &= ~_BV(TOIE1);
  sei();
}

//=====================================================================

//ISR(TIMER0_OVF_vect)
ISR(TIMER0_COMPA_vect) //64 kHz
{
	volatile static uint32_t acc0=0;
	volatile static uint32_t acc1=0;
	volatile static uint16_t left=0;
	volatile static uint16_t noteIndex=0;

	PORTD &= ~(1<<5);
	if (left)
	{
		left--;
	}
	else
	{
		uint8_t note=pgm_read_byte(&(notes[noteIndex].pitch));
		uint8_t dt=pgm_read_byte(&(notes[noteIndex].dt));
		if (note < 80)
		{
			ddsAdder1=noteTable[note-62];
			timeout1=6000;
		}
		else if (note < 96)
		{
			ddsAdder0=noteTable[note-62];
			timeout0=6000;
		}
		left=230*dt;
		noteIndex++;
		if (note==0)
		{
			noteIndex=0;
			left=60000;
		}
	}

	if (timeout0!=0)
	{
		acc0+=ddsAdder0;
		if ((acc0 & ((1ULL<<17)-1)) > timeout0<<2)
		{
			PORTE=(1<<6);
		}
		else
		{
			PORTE=0;
		}
		timeout0--;
	}
	else
	{
		PORTE=0;
	}
	
	if (timeout1!=0)
	{
		acc1+=ddsAdder1;
		if ((acc1 & ((1ULL<<17)-1)) > timeout1<<2)
		{
			PORTB=(1<<4);
		}
		else
		{
			PORTB=0;
		}
		timeout1--;
	}
	else
	{
		PORTB=0;
	}
	PORTD |= (1<<5);
}

//=====================================================================

void toggle()
{
	static uint8_t ledState=0;
	if (ledState==1)
	{
		PORTD |= (1<<5);
		ledState=0;
	}
	else
	{
		PORTD &= ~(1<<5);
		ledState=1;
	}
}

//=====================================================================

int main(void)
{
	cli();
  USBCON = 0;  // Disable USB interrupts
  MCUSR &= ~(1 << WDRF);
	wdt_disable();
	clock_prescale_set(clock_div_1);
	
	DDRE=(1<<6);
	DDRD=(1<<5);
	DDRB=(1<<4);

  timerInit();
  timerStart();

	while(1)
	{
		//toggle();
	}

}

