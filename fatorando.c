#include <stdio.h>

int cal_fat(int);

int main(){
  int numero = 13;
  int num_fat = cal_fat(numero);
  printf("\nO fatorial de %d eh: %d", numero, num_fat);
  return 0;
}

int cal_fat(int b){
    int fatorial = 1;
    for(int contador = b; contador >= 1; contador--){
        fatorial *= contador;
        printf(" %d", fatorial);
    }
    return fatorial;
}