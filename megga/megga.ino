#define l_forward   2
#define l_back      3
#define r_forward   4
#define r_back      5


void setup() {
 
 pinMode(A0,INPUT);
 pinMode(A1,INPUT);
 pinMode(A2,INPUT);
 pinMode(A3,INPUT);

 for(int i=2;i<=13;i++) pinMode(i,OUTPUT);

 
  Serial.begin(9600);
}
int power=255;
void loop() {
    
    analogWrite(2,digitalRead(A0)*power);
    analogWrite(3,digitalRead(A1)*power);
    analogWrite(4,digitalRead(A2)*power);
    analogWrite(5,digitalRead(A3)*power);
    analogWrite(6,digitalRead(A0)*power);
    analogWrite(7,digitalRead(A1)*power);
    analogWrite(8,digitalRead(A2)*power);
    analogWrite(9,digitalRead(A3)*power);
    analogWrite(10,digitalRead(A0)*power);
    analogWrite(11,digitalRead(A1)*power);
    analogWrite(12,digitalRead(A2)*power);
    analogWrite(13,digitalRead(A3)*power);
    

  
   Serial.print(0);Serial.print(':');Serial.println(digitalRead(A0));
   Serial.print(1);Serial.print(':');Serial.println(digitalRead(A1));
   Serial.print(2);Serial.print(':');Serial.println(digitalRead(A2));
   Serial.print(3);Serial.print(':');Serial.println(digitalRead(A3));
   Serial.println();
  // break;
  
  
  
    
    //delay(200);
}
