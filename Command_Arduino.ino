void setup() {

  Serial.begin(115200);

  pinMode(13,OUTPUT);

  Serial.println("Start");

  digitalWrite(13,HIGH);

  delay(1000);

  digitalWrite(13,LOW);
  
}

void loop() {

  if(Serial.available()){

    Serial.setTimeout(100);

    String command =  Serial.readStringUntil('\n');

    if(command.indexOf("on") > -1){

      Serial.println("On");
      
      digitalWrite(13,HIGH);
      
    }else if(command.indexOf("off") >-1){


       Serial.println("Off");
       
      digitalWrite(13,LOW);
    
    
    }
    
      
  }

}
