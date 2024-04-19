#include "battat.h"
void battatden(int pin, int tt, int tg)
{
  digitalWrite(pin, tt);
  delay(tg);
}

