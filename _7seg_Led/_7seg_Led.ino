int segb[]={0x0f,0x06,0x0b,0x0f,0x06,0x0d,0x0d,0x07,0x0f,0x0f}; 
int segc[]={0x03,0x00,0x05,0x04,0x06,0x06,0x07,0x00,0x07,0x06};
void setup() {
  // put your setup code here, to run once:
DDRD=0xFF; 
DDRB=0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
int i; 
for(i=0;i<10;i++){
  PORTD=i; 
  PORTB=segb[i]; 
  PORTC=segc[i];
  delay(500);
  }
}
