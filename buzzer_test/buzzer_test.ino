int buzzer = 4 ;
void setup ()
{
  pinMode (buzzer, OUTPUT) ;
}
void loop ()
{
  unsigned char i, j ;
  while (1)
  {
    for (i = 0; i <80; i++) // When a frequency sound
    {
      digitalWrite (buzzer, HIGH) ; //send tone
      delay (1) ;
      digitalWrite (buzzer, LOW) ; //no tone
      delay (1) ;
    }
    for (i = 0; i <100; i++) 
    {
      digitalWrite (buzzer, HIGH) ;
      delay (2) ;
      digitalWrite (buzzer, LOW) ;
      delay (2) ;
    }
  }
}
