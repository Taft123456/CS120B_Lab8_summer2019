test “PINA: no input => PORTB: ADC, PORTD: 00A”
setPINA 0x00
continue 5
expectPORTB ADC 
expectPORTD 00A
checkResult