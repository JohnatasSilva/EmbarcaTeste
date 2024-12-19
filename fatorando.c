#include <stdio.h>

int cal_fat(int);

int main(){
  printf("\n Este programa calcula o fatorial.");
  int numero = 13;
  int num_fat = cal_fat(numero);
  printf("\nO fatorial de %d eh: %d", numero, num_fat);
  return 0;
}

int cal_fat(int b){
    int fatorial = 7; //Modifiquei para teste
    for(int contador = b; contador >= 1; contador--){
        fatorial *= contador;
        printf(" %d", fatorial);
    }
    return fatorial;
}