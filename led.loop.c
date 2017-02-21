#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_ON_MS 1000
#define BLINK_DELAY_OFF_MS 700

int turn5OnQuicklyAndWait()
{
  /* turn it back on */
  PORTB |= _BV(PORTB5);
  _delay_ms(200);
}

int turn5OffQuicklyAndWait()
{
  // turn it back off quickly
  PORTB &= ~_BV(PORTB5);
  _delay_ms(200);
}

int main(void)
{
  /* set pin 5 of PORTB for output*/
  DDRB |= _BV(DDB5);

  while (1)
  {
    /* set pin 5 high to turn led on */
    PORTB |= _BV(PORTB5);
    _delay_ms(BLINK_DELAY_ON_MS);

    /* set pin 5 low to turn led off */
    PORTB &= ~_BV(PORTB5);
    _delay_ms(BLINK_DELAY_OFF_MS);

    // blink it a bunch of times
    for (int i = 0; i < 20; i++)
    {
      turn5OnQuicklyAndWait();
      turn5OffQuicklyAndWait();
    }
  }
}