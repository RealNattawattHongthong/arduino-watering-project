void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(53,OUTPUT);
pinMode(49,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(9,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:


  while(moisture() >= 7 && moisture() <=10){
    //Serial.print(value);
    Serial.println(moisture()," Wet Soil");
  }

  while(moisture() >= 4 && moisture() < 7){
    //Serial.print(value);
    Serial.println(moisture()," Moist Soil");
  }

  while (moisture() >= 0 && moisture() < 4){
    //Serial.print(value);
    Serial.println(moisture()," Dry Soil");
    digitalWrite(9,HIGH);    
  }

  digitalWrite(9,LOW);
  delay(50);

  
}

int moisture(){
  int val = analogRead(A7);
  int value = map(val,200,920,10,0);
  //Serial.print(value);
  return value;
}
