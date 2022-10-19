/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre
 qual a classificação dessa pessoa. */
 #include <stdio.h>

 int main(){
   float altura, peso;

   printf("Digite seu peso: ");
   scanf("%f", &peso);

   printf("Digite sua altura: ");
   scanf("%f", &altura);

   if(altura < 1.2 && peso <= 60)
   printf("Sua categoria e: A");
   else if(altura < 1.2 && (peso > 60 && peso <= 90))
   printf("Sua categoria e: D");
   else if(altura < 1.2 && peso > 90)
   printf("Sua categoria e: G");
   else if((altura > 1.2 && altura < 1.7) && peso <= 60)
   printf("Sua categoria e: B");
   else if((altura > 1.2 && altura < 1.7) && (peso > 60 && peso <= 90))
   printf("Sua categoria e: E");
   else if((altura > 1.2 && altura < 1.7) && (peso > 90))
   printf("Sua categoria e: H");
   else if(altura > 1.7 && peso <= 60)
   printf("Sua categoria e: C");
   else if(altura > 1.7 && (peso > 60 && peso <= 90))
   printf("Sua categoria e: F");
   else if(altura > 1.7 && (peso > 90))
   printf("Sua categoria e: I");
   else
   printf("Houve um erro");
 }