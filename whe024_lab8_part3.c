#include <avr/io.h>

void ADC_init() {
	ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}

int main(void)
{
	DDRA = 0x00;
	DDRB = 0xFF;
	PORTA = 0xFF;
	PORTB = 0x00;
	unsigned short max = 0x0C7;
	unsigned short temp = 0x000;
	ADC_init();
	while (1)
	{
		temp = ADC;
		if(temp >= (max / 2))
		{
			PORTB = 0x01;
		}
		else
		{
			PORTB = 0x00;
		}
	}
}
