#line 1 "C:/Users/hk/Desktop/ISIS & mikroC ex/EX/ex2/EX2.c"
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
