const int Left_Font_Motor = 8;
const int Left_Back_Motor = 9;
const int Right_Font_Motor = 10;
const int Right_Back_Motor = 11;

void setup(){
  pinMode(Left_Font_Motor, OUTPUT);
  pinMode(Left_Back_Motor, OUTPUT);
  pinMode(Right_Font_Motor, OUTPUT);
  pinMode(Right_Back_Motor, OUTPUT);
}

void loop(){
  digitalWrite(Left_Font_Motor,   1);
  digitalWrite(Left_Back_Motor, 0);
  digitalWrite(Right_Font_Motor,   1);
  digitalWrite(Right_Back_Motor, 0);

  delay(2000);

  digitalWrite(Left_Font_Motor,   0);
  digitalWrite(Left_Back_Motor, 1);
  digitalWrite(Right_Font_Motor,   0);
  digitalWrite(Right_Back_Motor, 1);
  delay(2000);
}