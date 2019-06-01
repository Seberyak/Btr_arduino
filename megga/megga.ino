#define l_forward   2
#define l_back      3
#define r_forward   4
#define r_back      5


void setup() {
 
 pinMode(30,INPUT);
 pinMode(31,INPUT);
 pinMode(32,INPUT);
 pinMode(33,INPUT);

 for(int i=2;i<=13;i++)
 pinMode(i,OUTPUT);

 
  Serial.begin(9600);
}

void loop() {
    for(int i=1;i<=3;i++){
    analogWrite(i*l_forward,digitalRead(30)*255);
    analogWrite(i*l_back,digitalRead(31)*255);
    analogWrite(i*r_forward,digitalRead(32)*255);
    analogWrite(i*r_back,digitalRead(33)*255);
    }
  for(int i=30;i<34;i++){
    if(digitalRead(i)){
   Serial.print(i-30);Serial.print(':');Serial.println(digitalRead(i));
   //Serial.print(1);Serial.print(':');Serial.println(digitalRead(3));
   //Serial.print(2);Serial.print(':');Serial.println(digitalRead(4));
   //Serial.print(3);Serial.print(':');Serial.println(digitalRead(5));
   Serial.println();
  // break;
  }
  
  }
    
    //delay(100);
}
