const int Left_Font_Motor = 8;
const int Left_Back_Motor = 9;
const int Right_Font_Motor = 10;
const int Right_Back_Motor = 11;
const int HornVcc = A5;
const int HornGnd = A2;
char Incoming_value = 0;

void setup(){
  Serial.begin(9600);
  pinMode(Left_Font_Motor, OUTPUT);
  pinMode(Left_Back_Motor, OUTPUT);
  pinMode(Right_Font_Motor, OUTPUT);
  pinMode(Right_Back_Motor, OUTPUT);
  pinMode(HornVcc, OUTPUT);
  pinMode(HornGnd, OUTPUT);
}

void loop(){

  if (Serial.available() > 0){ // Serial commanication stablish cheeking
    Incoming_value = Serial.read();
    Serial.println(Incoming_value);
  }

  //STOP THE CAR
  if (Incoming_value == 'S'){
    digitalWrite(Left_Font_Motor,   0);
    digitalWrite(Left_Back_Motor, 0);
    digitalWrite(Right_Font_Motor,   0);
    digitalWrite(Right_Back_Motor, 0);
  }


  // Forward The Car
  if (Incoming_value == 'F'){
  digitalWrite(Left_Font_Motor,   1);
  digitalWrite(Left_Back_Motor, 0);
  digitalWrite(Right_Font_Motor,   1);
  digitalWrite(Right_Back_Motor, 0);
  }

  // Backwar Ther Car
  if (Incoming_value == 'B'){
  digitalWrite(Left_Font_Motor,   0);
  digitalWrite(Left_Back_Motor, 1);
  digitalWrite(Right_Font_Motor,   0);
  digitalWrite(Right_Back_Motor, 1);
  }


  // Left Ther Car
  if (Incoming_value == 'L'){
  digitalWrite(Left_Font_Motor,   1);
  digitalWrite(Left_Back_Motor, 0);
  digitalWrite(Right_Font_Motor,   0);
  digitalWrite(Right_Back_Motor, 1);
  }



  // Right Ther Car
  if (Incoming_value == 'R'){
  digitalWrite(Left_Font_Motor,   0);
  digitalWrite(Left_Back_Motor, 1);
  digitalWrite(Right_Font_Motor,   1);
  digitalWrite(Right_Back_Motor, 0);
  }

  // Horn
  if (Incoming_value == 'V'){
  digitalWrite(HornVcc,   1);
  digitalWrite(HornGnd, 0);
  delay(200);
  digitalWrite(HornVcc,   0);
  digitalWrite(HornVcc, 0);
  }

}