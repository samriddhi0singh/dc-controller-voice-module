int motor_1=9;
String voice1;
void setup() {
  Serial.begin(9600);
pinMode(motor_1,OUTPUT);
}

void loop() {

 while (Serial.available()){ 
  delay(10); 
  char a = Serial.read();
   if (a == '#') {break;}
  voice1 += a;
  }  
  if (voice1.length() > 0) {
    Serial.println(voice1); 
    if(voice1== "shutdown") {analogWrite(motor_1, 0); Serial.println("Speed is = 0");}
  else if(voice1== "Speed 1"|| voice1=="speed 1"){analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 175) ; Serial.println("Speed is = 1");}
  else if(voice1 == "Speed 2"|| voice1=="speed 2") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 180) ; Serial.println("Speed is = 2");}
  else if(voice1 == "Speed 3"|| voice1=="speed 3") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 185); Serial.println("Speed is = 3");}
  else if(voice1 == "Speed 4"|| voice1=="speed 4") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 190); Serial.println("Speed is = 4");}
  else if(voice1 == "Speed 5"|| voice1=="speed 5") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 195); Serial.println("Speed is = 5");}
  else if(voice1 == "Speed 6"|| voice1=="speed 6") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 200); Serial.println("Speed is = 6");}
  else if(voice1 == "Speed 7"|| voice1=="speed 7") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 205); Serial.println("Speed is = 7");}
  else if(voice1 == "Speed 8"|| voice1=="speed 8") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 210); Serial.println("Speed is = 8");}
  else if(voice1 == "Speed 9"|| voice1=="speed 9") {analogWrite(motor_1, 225); delay(10); analogWrite(motor_1, 225); Serial.println("Speed is = 9");}
voice1="";}}
