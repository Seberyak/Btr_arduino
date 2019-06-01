     /* l_forward D0
      l_back D1
      r_forward D2
      r_back D3
*/


  void convert(){
              if(s[0]=='W' and s[1]=='y' or s[0]=='y' and s[1]=='W'){ digitalWrite(l_forward,1);digitalWrite(r_forward,1);
              Serial.print(0);Serial.print(':');Serial.println(1); Serial.print(2);Serial.print(':');Serial.println(1);}
              
        else if (s[0]=='S' and s[1]=='y' or s[0]=='y' and s[1]=='S'){ digitalWrite(l_back,1);digitalWrite(r_back,1);
        Serial.print(1);Serial.print(':');Serial.println(1); Serial.print(3);Serial.print(':');Serial.println(1);
        }
        
        else if (s[0]=='W' and s[1]=='A' or s[0]=='A' and s[1]=='W'){ digitalWrite(r_forward,1);
        Serial.print(2);Serial.print(':');Serial.println(1);}
        
        else if (s[0]=='W' and s[1]=='D' or s[0]=='D' and s[1]=='W'){ digitalWrite(l_forward,1);
        Serial.print(1);Serial.print(':');Serial.println(1);}
        
        else if (s[0]=='S' and s[1]=='A' or s[0]=='A' and s[1]=='S'){ digitalWrite(r_back,1);
        Serial.print(3);Serial.print(':');Serial.println(1);}
        
        else if (s[0]=='S' and s[1]=='D' or s[0]=='D' and s[1]=='S'){ digitalWrite(l_back,1);
        Serial.print(2);Serial.print(':');Serial.println(1);}
        
        else if (s[0]=='A' and s[1]=='y' or s[0]=='y' and s[1]=='A'){ digitalWrite(l_back,1);digitalWrite(r_forward,1);
        Serial.print(1);Serial.print(':');Serial.println(1);Serial.print(2);Serial.print(':');Serial.println(1);
        }
        
        else if (s[0]=='D' and s[1]=='y' or s[0]=='y' and s[1]=='D'){ digitalWrite(l_forward,1);digitalWrite(r_back,1);
        Serial.print(0);Serial.print(':');Serial.println(1);Serial.print(3);Serial.print(':');Serial.println(1);}
        
        else {digitalWrite(l_forward,0);  digitalWrite(r_forward,0);  digitalWrite(l_back,0); digitalWrite(r_back,0);}
        
        
        }
