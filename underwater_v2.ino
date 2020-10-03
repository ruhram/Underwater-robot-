int ch1 = A0;
int ch2 = A1;
int ch3 = A2;
int ch4 = A3;
int ch5 = A4;
int ch6 = A5;
int in1_motorA = 2;
int in2_motorA = 3;
int in3_motorB = 4;
int in4_motorB = 5;
int in1_motorC = 6;
int in2_motorC = 7;
int in3_motorD = 8;
int in4_motorD = 9;
int relay = 10;
int nilai_ch1 = 0;
int nilai_ch2 = 0;
int nilai_ch3 = 0;
int nilai_ch4 = 0;

void setup() {
Serial.begin(9600);
pinMode(ch1, INPUT);
pinMode(ch2, INPUT);
pinMode(ch3, INPUT);
pinMode(ch4, INPUT);
pinMode(ch5, INPUT);
pinMode(ch6, INPUT);
pinMode(in1_motorA, OUTPUT);
pinMode(in2_motorA, OUTPUT);
pinMode(in3_motorB, OUTPUT);
pinMode(in4_motorB, OUTPUT);
pinMode(in1_motorC, OUTPUT);
pinMode(in2_motorC, OUTPUT);
pinMode(in3_motorD, OUTPUT);
pinMode(in4_motorD, OUTPUT);
pinMode(relay, OUTPUT);
digitalWrite(relay, HIGH);
}

void loop() {
  
nilai_ch1 = pulseIn(ch1, HIGH)/100;
nilai_ch2 = pulseIn(ch2, HIGH)/100;
nilai_ch3 = pulseIn(ch3, HIGH)/100;
nilai_ch4 = pulseIn(ch4, HIGH)/100;
Serial.println(nilai_ch2);

if(nilai_ch1 == 0 && nilai_ch2 == 0 && nilai_ch3 == 0 && nilai_ch4 == 0){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 0);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 0);
  digitalWrite(in1_motorC, LOW);
  analogWrite(in2_motorC, 0);
  digitalWrite(in3_motorD, LOW);
  analogWrite(in4_motorD, 0);
  digitalWrite(relay, HIGH);
}
if(nilai_ch1 == 14){
  digitalWrite(in1_motorA, HIGH);
  analogWrite(in2_motorA, 255);
  digitalWrite(in3_motorB, HIGH);
  analogWrite(in4_motorB, 255);
}
if(nilai_ch2 == 14){
  digitalWrite(in1_motorC, LOW);
  analogWrite(in2_motorC, 0);
  digitalWrite(in3_motorD, LOW);
  analogWrite(in4_motorD, 0);
}
if(nilai_ch1 >=16 && nilai_ch1 <=18){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 0);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 100);
}
if(nilai_ch1 >=19){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 0);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 255);
}
if(nilai_ch1 >=11 && nilai_ch1 <= 13){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 100);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 0);
}
if(nilai_ch1 <=10 && nilai_ch1 >= 9){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 200);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 0);
}
if(nilai_ch2 >=15 && nilai_ch2 <= 18){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 150);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 150);
}
if(nilai_ch2 >=19){
  digitalWrite(in1_motorA, LOW);
  analogWrite(in2_motorA, 255);
  digitalWrite(in3_motorB, LOW);
  analogWrite(in4_motorB, 255);
}
if(nilai_ch2 <=13 && nilai_ch2 >=8){
  digitalWrite(in1_motorA, HIGH);
  digitalWrite(in2_motorA, LOW);
  digitalWrite(in3_motorB, HIGH);
  digitalWrite(in4_motorB, LOW);
}
if(nilai_ch3 >= 12 && nilai_ch3<=14){
  analogWrite(in1_motorC, 40);
  digitalWrite(in2_motorC, LOW);
  digitalWrite(in3_motorD, LOW);
  analogWrite(in4_motorD, 40);
}
if (nilai_ch3 >=15){
  analogWrite(in1_motorC, 100);
  digitalWrite(in2_motorC, LOW);
  digitalWrite(in3_motorD, LOW);
  analogWrite(in4_motorD, 100);
}
if (nilai_ch4>=18){
  digitalWrite(relay, LOW);
}
if (nilai_ch4<=10){
  digitalWrite(relay, HIGH);
}
}
