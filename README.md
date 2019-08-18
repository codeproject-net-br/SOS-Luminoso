# SOS Luminoso

Você já deve ter visto nos filmes quando as pessoas enviam pedido de socorro SOS em código morse. Neste projeto iremos piscar um LED no padrão SOS. A letra S são 3 piscadas curtas indicando o ponto do código morse e a letra O são 3 piscadas um pouco mais longas indicando o traço do código morse.

<img src="https://uploads.filipeflop.com/2018/12/PROJETO002.gif" width="100%">

Este projeto mostra que, através da programação, podemos piscar o LED de diferentes maneiras e intervalos de tempo.

## Material necessário

* 1x LED Vermelho 5mm
* 1x Resistor 220 ohm
* 1x Protoboard
* 2x Jumper macho-macho
* 1x Cabo USB
* 1x Placa Uno

## Montagem do projeto

Nesse projeto vamos utilizar o mesmo circuito do Projeto Pisca pisca.

<img src="https://uploads.filipeflop.com/2018/12/projeto_01_bb-1024x555.png" width="100%">

## Programa: Projeto 2 - SOS Luminoso

O programa, como feito com o Projeto Pisca pisca, acende e apaga a luz conforme um padrão. Como algumas coisas se repetem, foi acrescentada uma estrutura no código para repetição.

A ideia não é entender exatamente como as estruturas de repetição funcionam, mas sim que elas existem. Quando precisar utilizar alguma dessas estruturas em um projeto, você pode procurar como é feito, ou mesmo alterar os valores nesse código.

```c
//  Projeto 2 - Sinal de SOS com LED
int pinoLed = 11;
 
void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // S(...) tres pontos
  for(int x=0;x<3;x++)  {         // Repete tudo dentro das chaves tres vezes
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
```

## Desafios

Veja abaixo alguns desafios que você pode tentar!

* Troque o LED por outro de cor diferente;
* Monte o circuito de uma maneira alternativa usando outros furos e posições na protoboard.
