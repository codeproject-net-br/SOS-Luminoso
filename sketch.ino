//  Projeto 2 - Sinal de SOS com LED
int pinoLed = 11;
 
void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // S(...) tres pontos
  for(int x=0;x<3;x++)  {           // Repete tudo dentro das chaves tres vezes
    digitalWrite(pinoLed,HIGH);     // Acende o LED       
    delay(150);                     // Aguarda
    digitalWrite(pinoLed,LOW);      // Desliga o LED
    delay(100);                     // Aguarda novamente
  }
   
  delay(200);
       
  // O(---) tres linhas
  for(int x=0;x<3;x++)  {
    digitalWrite(pinoLed,HIGH);            
    delay(450);                           
    digitalWrite(pinoLed,LOW);             
    delay(150);                           
  }
 
  delay(200);
       
  //S(...) tres pontos
  for(int x=0;x<3;x++)  {
    digitalWrite(pinoLed,HIGH);           
    delay(150);                           
    digitalWrite(pinoLed,LOW);            
    delay(100);                           
  }
 
  delay(5000);
}
