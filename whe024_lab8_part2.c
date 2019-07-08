#include <avr/io.h>

void ADC_init() {
	ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}

int main(void)
{
	DDRA = 0x00;
	DDRB = 0xFF;
	DDRD = 0xFF;
	PORTA = 0xFF;
	PORTB = 0x00;
	PORTD = 0x00;
	ADC_init();
	while (1)
	{
		unsigned short convert = ADC;
		PORTB = (char)convert;
		PORTD = (char)(convert >> 8);
	}
}
