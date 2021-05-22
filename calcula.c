/* Forma mais simples até o momento para calcular utilizando uma funcao.
Existem outras formas, porém a meta é reduzir ao máximo o código.*/


#include <stdio.h>
#include<stdlib.h>
float numero1, numero2, resultado;
int opcao;

void testaValor(){
   printf("Selecione a opcao desejada:\n 1 - SOMAR\n 2 - SUBTRAIR\n 3 - DIVIDIR\n 4 - MULTIPLICAR\n");
   scanf("%d",&opcao);
   if(opcao>4 || opcao<1){
       printf("Opcao Invalida!, Tente novamente\n");
       testaValor();
   }
   }

float total(){
    
    testaValor();

printf("Digite o Primeiro numero\n");
   scanf("%f", &numero1);
   printf("Digite o Segundo numero\n");
   scanf("%f", &numero2);

    if(opcao == 1){
        return numero1+numero2;
        
    }
    if(opcao == 2){
        return numero1-numero2;
    }
    if(opcao == 3){
        return numero1/numero2;
    }
    if(opcao == 4){
        return numero1*numero2;
    }

}
int main (void)
{
   
  printf("%.2f\n", total());

}

