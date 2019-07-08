test “PINA: no input, temp: ADC => PORTB: 0x00”
setPINA 0x00
continue 5
expectPORTB 0x00
checkResult

test “PINA: no input, temp: 0x0C7 => PORTB: 0x01”
setPINA 0x00
continue 5
expectPORTB 0x01
checkResult