// clock at 16mhz 
//#define F_CPU 16000000L 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

  // define direction register in hex. 
  // DDRB = 0x01;

  // this is the same as output
  DDRB |= _BV(DDB5);
  
  // write to the port register. 
  PORTB = 0;


  // What does this do?
  // DDRB |= (1<<DDB5);

  // DDRB is DDR port b 


  while (1)
  {
    // What does this do? 

    // Why does it turn off and on?
    //PINB |= (1<<PINB5);
    
    // pin 5 high
    PORTB |= _BV(PORTB5);
    _delay_ms(600);
    // pin 5 low
    PORTB &= ~_BV(PORTB5);
    _delay_ms(400);
    
    // this doesnt work
    /*
    PORTB = 0x01;
    _delay_ms(500);
    PORTB = 0;
    */
  }
}