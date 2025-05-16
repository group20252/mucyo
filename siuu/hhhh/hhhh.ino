int sensor=9;
int buzzer=5; 
void setup(){
pinMode(sensor,INPUT);
pinMode(buzzer,OUTPUT);
}
void loop(){
if(digitalRead(sensor)==HIGH){
digitalWrite(buzzer,HIGH);
}
else{
digitalWrite(buzzer,LOW);
}
}
