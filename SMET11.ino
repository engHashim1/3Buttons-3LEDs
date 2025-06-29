int buttonState = 0;
int b1 = 2;
int b2 = 3;
int b3 = 4;

int BLED = 10;
int YLED = 11;
int RLED = 12;

void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
          
  pinMode(BLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  pinMode(RLED, OUTPUT);

}

void loop()
{
  if (digitalRead(b1) == HIGH){
    digitalWrite(BLED, HIGH);
  } else {
    digitalWrite(BLED, LOW);
  }
{
  if (digitalRead(b2) == HIGH){
    digitalWrite(YLED, HIGH);
  } else {
    digitalWrite(YLED, LOW);
  }
{
  if (digitalRead(b3) == HIGH){
    digitalWrite(RLED, HIGH);
  } else {
    digitalWrite(RLED, LOW);
  }

}}}