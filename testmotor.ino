void setup() {
Serial.begin (9600);
pinMode(5, OUTPUT);
pinMode(6,OUTPUT);
pinMode(11, OUTPUT);
pinMode(3,OUTPUT);
TCCR0A=0;//reset the register
TCCR0B=0;//reset tthe register
TCCR1A=0;//reset the register
TCCR1B=0;//reset tthe register
//timer0
TCCR0A=0b10100011;// fast pwm mode
TCCR0B=0b00000100;// 
//timer2
TCCR2A=0b10100011;// fast pwm mode
TCCR2B=0b00000110;// 
/*------------------------------------------------*/
int i=0;
OCR0A=0;
OCR0B=0;
OCR2A=0;
OCR2B=0;
delay(500);
OCR0A=255;
OCR0B=255;
OCR2A=255;
OCR2B=255;
OCR0A=0;
OCR0B=0;
OCR2A=0;
OCR2B=0;
delay(500);
for(i=80;i<128;i++)
{ 
OCR0A = i;  // pin 6
OCR0B = i-31;  // pin 5
OCR2A = i-7;  // pin 11
OCR2B = i-42;  // pin 3
Serial.print(i);
delay(50);
}
for(i=1;i>;++)
{ 
OCR0A -= i;  // pin 6
OCR0B -= i;  // pin 5
OCR2A -= i;  // pin 11
OCR2B -= i;  // pin 3
Serial.print(i);
delay(50);
}
}
void loop() {
OCR0A;
OCR0B;
OCR2A;
OCR2B;
Serial.print(OCR0A);
Serial.println(" ");
}
