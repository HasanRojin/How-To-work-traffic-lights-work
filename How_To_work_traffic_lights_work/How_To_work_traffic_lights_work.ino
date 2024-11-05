
   //How To work traffic lights work//

   int rled=5,yled=17,gled=16;

void setup() {
    pinMode(rled, OUTPUT);
     pinMode(yled, OUTPUT);
      pinMode(gled, OUTPUT);

}

void loop() {
 
     digitalWrite(rled, HIGH);
     digitalWrite(yled, LOW);
     digitalWrite(gled, LOW);
     delay(3000);
    
     digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, LOW);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, LOW);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled, LOW);
     digitalWrite(yled, LOW);
     digitalWrite(gled, HIGH);
     delay(3000);

         digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, LOW);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, LOW);
     digitalWrite(gled, LOW);
     delay(250);

     digitalWrite(rled,  LOW);
     digitalWrite(yled, HIGH);
     digitalWrite(gled, LOW);
     delay(250);

}
     
