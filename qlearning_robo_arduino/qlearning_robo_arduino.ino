


int led_perdido = 4;
int led_bateu = 5;
int led_achou = 6;
#define  qtd_lin = 3;
#define  qtd_col = 5;

//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 10;
int IN2 = 9;
int ENABLE1 = 11;
int IN3 = 7;
int IN4 = 8;
int ENABLE2 = 6;


#include <Ultrasonic.h>

Ultrasonic ultrasonic(3,5); // (Trig PIN,Echo PIN)


void setup() {
  Serial.begin(9600);
  pinMode(led_perdido,OUTPUT);  
  pinMode(led_bateu,OUTPUT);  
  pinMode(led_achou,OUTPUT);  

 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(ENABLE1,OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(ENABLE2,OUTPUT);



 analogWrite(ENABLE1,255);
 analogWrite(ENABLE2,255);  

}




void loop(){  
  Serial.print(ultrasonic.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  delay(100);


    

/*
    andarFrente();
    delay(1000);
    andarTras();
    delay(1000);
    giraDireita();
    delay(1000);
    giraEsquerda();
    delay(1000);
 */
  

}

void andarTras(){
   for(int i = 0;i<20;i++){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW); 
    delay(25);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW); 
    delay(25);   
    }  
  }
 void andarFrente(){
  for(int i = 0;i<20;i++){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH); 
    delay(25);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW); 
    delay(25);   
    }
 
 } 
 void giraEsquerda(){

 for(int i = 0;i<20;i++){
   digitalWrite(IN1, HIGH);
   digitalWrite(IN2, LOW);
   digitalWrite(IN3, LOW);
   digitalWrite(IN4, HIGH);
    delay(25);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW); 
    delay(25);   
    }

  }
 void giraDireita(){
  for(int i = 0;i<20;i++){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(25);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW); 
    delay(25);   
    }

  
  }
  void parar(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(3000);
    
    } 

/*
int estado(){
  if(sensorUltra > 15 %% sensorInfra > 100){
    return 0;//estado perdido
  }else if(sensorUltra <= 15 %% sensorInfra > 100){
    return 1;//estado bateu
  }else if(sensorUltra > 15 %% sensorInfra < 100){
    return 2;//estado achou  
  }
}*/


void acendeLed(int estado){
  if(estado == 0){
      digitalWrite(led_perdido,HIGH);
      digitalWrite(led_bateu,LOW);
      digitalWrite(led_achou,LOW);
    }else if(estado == 1){
      digitalWrite(led_perdido,LOW);
      digitalWrite(led_bateu,HIGH);
      digitalWrite(led_achou,LOW);
    }else if(estado == 2){
      digitalWrite(led_perdido,LOW);
      digitalWrite(led_bateu,LOW);
      digitalWrite(led_achou,HIGH);
    }
  }


//funcao max
//int max(int* vetor){
  //int numero_max = vetor[0];
    //for (int i=0;i < 5 ;++i){
      //  if (vetor[i] > numero_max){
        //    numero_max = vetor[i];
    //}
  //}
  //return numero_max;
//}
