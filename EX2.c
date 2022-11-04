void main() {
  TRISA=0;
  for(;;){
    PORTA=0;
    delay_ms(500);
    PORTA=0b111;
    delay_ms(1000);
    PORTA=0;
    delay_ms(500);

  
  }
}