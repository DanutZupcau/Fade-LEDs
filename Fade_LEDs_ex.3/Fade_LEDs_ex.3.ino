/**************************************************************
**                                                           **
**                    TÍTOL: Fade LEDs                       **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 16/04/2018     **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 100;         // velocitat de l'acció en ms
const int buttonPin = 2;

//******************* SETUP ****************************

void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  Serial.begin(9600);
}


//******************* LOOP *****************************

void loop(){

  if (digitalRead(buttonPin) == 1){
  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}

  

if (digitalRead(buttonPin) == 0)
{
  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);     
  analogWrite(led5, 0);    
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);     
  analogWrite(led5, 2); 
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 2);     
  analogWrite(led5, 10);      
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 0);   
  analogWrite(led3, 2);    
  analogWrite(led4, 10);     
  analogWrite(led5, 30);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);   
  analogWrite(led2, 2);   
  analogWrite(led3, 10);    
  analogWrite(led4, 30);     
  analogWrite(led5, 100);   
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 0);    
  analogWrite(led1, 2);   
  analogWrite(led2, 10);   
  analogWrite(led3, 30);    
  analogWrite(led4, 100);     
  analogWrite(led5, 160);  
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 2);    
  analogWrite(led1, 10);   
  analogWrite(led2, 30);   
  analogWrite(led3, 100);    
  analogWrite(led4, 160);     
  analogWrite(led5, 255);
     
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 10);    
  analogWrite(led1, 30);   
  analogWrite(led2, 100);   
  analogWrite(led3, 160);    
  analogWrite(led4, 255);     
  analogWrite(led5, 255); 
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 30);    
  analogWrite(led1, 100);   
  analogWrite(led2, 160);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);     
  analogWrite(led5, 255);   
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 100);    
  analogWrite(led1, 160);   
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);     
  analogWrite(led5, 255);  
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 160);    
  analogWrite(led1, 255);   
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);     
  analogWrite(led5, 255);  
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    
  analogWrite(led1, 255);   
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);     
  analogWrite(led5, 255);   

   delay(velocitat);           // es queden leds velocitat ms en aquest estat
}
Serial.println(buttonPin);
}

