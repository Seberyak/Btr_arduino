/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#define l_forward D0
#define l_back D1
#define r_forward D2
#define r_back D4

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(D2, D3); // RX, TX == D3//
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "fb3d5a278934461eb61aed25704d2573";
String s,s1;
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "CU_STUDENTS";
char pass[] = "CUcu2019";

BLYNK_WRITE (V8){
  s=param.asString();
  }

void setup()
{

  pinMode(l_forward,OUTPUT);
  pinMode(r_forward,OUTPUT);
  pinMode(l_back,OUTPUT);
  pinMode(r_back,OUTPUT);
  // Debug console
  Serial.begin(9600);
  mySerial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
char arr[2];
void loop()
{
  Blynk.run();
   if(s!=s1){
   s1=s;
   mySerial.write(arr,2);
   // mySerial.print(s);
   Blynk.virtualWrite(5,s[0]);
   Blynk.virtualWrite(5,s[1]);
   Blynk.virtualWrite(5,"\n");
   convert();
   Serial.println(s); 
   }
}
