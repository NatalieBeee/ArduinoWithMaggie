
//#define LED 13   //LED = pin 13
int i = 0;
const int LED = 9;

void setup() {
  pinMode(LED, OUTPUT);    //use LED as output
}

void loop() {
  /*
  digitalWrite(LED_BUILTIN, HIGH);    //turns LED on
  delay(4000);                        //waits 1 second
  digitalWrite(LED_BUILTIN, LOW);     //turns LED off
  delay(500);                         //waits 1 second 
  */

  for (int i = 0; i < 255; i++)
  {
    analogWrite(LED, i);
    delay(5);
  }

  for (int i = 255; i > 0; i--)       //i-- = i-=1, i++ = i+=1
  {
    analogWrite(LED, i);
    delay(5);
  }
}
