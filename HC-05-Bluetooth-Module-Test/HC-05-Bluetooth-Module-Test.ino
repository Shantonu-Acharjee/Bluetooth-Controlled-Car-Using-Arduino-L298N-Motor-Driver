


char Incoming_value = 0;
  
void setup() {
  
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void  loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()  > 0)
    {
      Incoming_value = Serial.read();
      Serial.println(Incoming_value);
      
      if (Incoming_value == 'F')
        digitalWrite(13,HIGH);
      else if(Incoming_value == 'B')
        digitalWrite(13,LOW);
    }
}