void setup() { 
  for(byte i=8; i<=12;i++){ 
    pinMode(i,OUTPUT); 
    pinMode(i,LOW); 
  } 
} 
void loop() { 
 //Bucle de Encendido Progresivo 
  for(byte i=8; i<=12;i++){ 
    digitalWrite(i,HIGH); 
    delay(20); 
  } 
  //Bucle de Apagado Progresivo 
   for(byte i=12; i>=8;i--){ 
    digitalWrite(i,LOW); 
    delay(20); 
   } 
} 
