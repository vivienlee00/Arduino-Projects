void setup() {
  // put your setup code here, to run once:
    pinMode(8, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(13, OUTPUT);
 //   pinMode(6, OUTPUT);
    pinMode(7, INPUT);


                                                                                                                                                                                   
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonstate = digitalRead(7);

    if(buttonstate == HIGH){
      int num = random(6) + 1;
   
        if(num == 1){
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(13, LOW);
          delay(500);
        }
        if(num == 2){
          digitalWrite(11, HIGH);
          delay(500);
          digitalWrite(11, LOW);
          delay(500);
        }
        if(num == 3){
          digitalWrite(11, HIGH);
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(11, LOW);
          digitalWrite(13, LOW);
          delay(500);
        }
        if(num == 4){
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          delay(500);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          delay(500);
        }
        if(num == 5){
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          digitalWrite(13, LOW);
          delay(500);
        }
        if(num == 6){
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(8, HIGH);

          delay(500);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          digitalWrite(8, LOW);
          delay(500);
        }
    }
 
    
    
    /*
          int ledPin = random(6) + 8;
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
     */


}

