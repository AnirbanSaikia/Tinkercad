// Traffic Light Codes

int red=12; 
int yellow=11;
int green=10; 

void setup() 
{ 
pinMode(green,OUTPUT);  
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT); 
} 


void loop() 
{ 
digitalWrite(green,HIGH);
delay(13000);  
digitalWrite(green,LOW);  
delay(230); 


digitalWrite(yellow,HIGH); 
delay(4000); 
digitalWrite(yellow,LOW);  
delay(300); 


digitalWrite(red,HIGH); 
delay(12000);  
digitalWrite(red,LOW); 
delay(300); 
}
