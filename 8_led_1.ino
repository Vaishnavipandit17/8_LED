int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

int poten = A0;
int delayperiod = 0;
int invalue;

void setup()
{
  pinMode( led1, OUTPUT);
  pinMode( led2, OUTPUT);
  pinMode( led3, OUTPUT);
  pinMode( led4, OUTPUT);
  pinMode( led5, OUTPUT);
  pinMode( led6, OUTPUT);
  pinMode( led7, OUTPUT);
  pinMode( led8, OUTPUT);
  
  pinMode( poten, INPUT);
}
void loop()
{
  invalue = analogRead(poten);
  delayperiod = map(invalue,0,1023,0,1000);
  
  digitalWrite(led1, HIGH);
  delay(delayperiod);
  
  digitalWrite(led2, HIGH);
  delay(delayperiod);
  
  digitalWrite(led3, HIGH);
  delay(delayperiod);
  
  digitalWrite(led4, HIGH);
  delay(delayperiod);
  
  digitalWrite(led5, HIGH);
  delay(delayperiod);
  
  digitalWrite(led6, HIGH);
  delay(delayperiod);
  
  digitalWrite(led7, HIGH);
  delay(delayperiod);
  
  digitalWrite(led8, HIGH);
  delay(delayperiod);
  
  digitalWrite(led1, LOW);
  delay(delayperiod);
  
  digitalWrite(led2, LOW);
  delay(delayperiod);
  
  digitalWrite(led3, LOW);
  delay(delayperiod);
  
  digitalWrite(led4, LOW);
  delay(delayperiod);
  
  digitalWrite(led5, LOW);
  delay(delayperiod);
  
  digitalWrite(led6, LOW);
  delay(delayperiod);
  
  digitalWrite(led7, LOW);
  delay(delayperiod);
  
  digitalWrite(led8, LOW);
  delay(delayperiod);
}