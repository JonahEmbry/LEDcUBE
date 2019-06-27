

void setup() {
  // put your setup code here, to run once:
  
  for (int i=0;i<11;i++)
    {
        pinMode(i,OUTPUT);    // PINS0-10 are set as output
    }
    pinMode(A0,OUTPUT);    //PIN A0 set as output
    pinMode(A1,OUTPUT);   // PIN A1 set as output
    pinMode(A2,OUTPUT);   // PIN A2 set as output
    
    digitalWrite(A0,HIGH);    //pull up the A0 pin
    digitalWrite(A1,HIGH);   // pull up the A1 pin
    digitalWrite(A2,HIGH);   // pull up the A2 pin

      /* add setup code here, setup code runs once when the processor starts */

}

void loop() {
  // put your main code here, to run repeatedly:

//### Variables
int timer1 = 100;
int timer2 = 400;
int LEVEL[] = {2,3,4,5,6,7,8,9,10};

//### Cycle Through Lights
  
  digitalWrite(A0,LOW);    //layer 1 of cube is grounded
          for (int i=2;i<11;i++)
          {
              digitalWrite(i,HIGH);    //turn ON each LED one after another in layer1
                              delay(timer1);
                              delay(timer1);
                              delay(timer1);
            //digitalWrite(i,LOW);
          }
  digitalWrite(A0,HIGH);    //layer1 is pulled up

  for(int i = 2; i < 11; i++){ 
    digitalWrite(i, LOW);
  }
  
  digitalWrite(A1,LOW);   // layer 2 of cube is grounded
          for (int i=2;i<11;i++)
          {
            digitalWrite(i,HIGH);   // turn ON each LED one after another in layer2
                            delay(timer1);
                            delay(timer1);
                            delay(timer1);
             //digitalWrite(i,LOW);
          }
  digitalWrite(A1,HIGH);    // layer2 is pulled up

  for(int i = 2; i < 11; i++){ 
    digitalWrite(i, LOW);
  }
          
  digitalWrite(A2,LOW);    // layer 3 of cube is grounded
        for (int i=2;i<11;i++)
        {
            digitalWrite(i,HIGH);    // turn ON each LED one after another in layer3
                          delay(timer1);
                          delay(timer1);
                          delay(timer1);
             //digitalWrite(i,LOW);
        }
  digitalWrite(A2,HIGH);    // layer3 is pulled up

  for(int i = 2; i < 11; i++){ 
    digitalWrite(i, LOW);
  }

//### Flash each row

  //Top Layer
  for(int i = 2; i < 11; i++){ 
    digitalWrite(i, HIGH);
  }
    digitalWrite(A0, LOW);
    delay(timer2);
    //digitalWrite(A0, HIGH);
    digitalWrite(A1, LOW);
    delay(timer2);
    //digitalWrite(A1, HIGH);
    digitalWrite(A2, LOW);
    delay(timer2);
    digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    delay(timer2);
  for(int i = 2; i < 11; i++){ 
    digitalWrite(i, LOW);
  }
}
