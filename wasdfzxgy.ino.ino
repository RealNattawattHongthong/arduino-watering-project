void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(53,OUTPUT);
pinMode(49,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  int value = map(val,0,1023,100,0);
  Serial.println(value);


  if(value < 30){
    digitalWrite(53,HIGH);
    delay(500);
    digitalWrite(53,LOW);
      delay(500);
  }else{
    digitalWrite(49,HIGH);
    delay(500);
    digitalWrite(49,LOW);
      delay(500);
  }


  delay(300);

  
}
