#include <stdio.h>

int main(){
    int leds[5] = {0,0,0,0,0};
    int inv = 1; //variável que inverte a condição do led

    //Exibe a condição inicial dos leds que no caso estão desigados(0)
    printf("\nLEDs desligados: \n");
    for(int i=0; i<5; i++){
        printf("%d ",leds[i]);
    }
    printf("\n");
    while(inv != 0){
        printf("\nDigite o numero do LED para alternar (1-5) ou (0) para sair: ");
        scanf("%d", &inv);
        if(inv == 0) // Se o usuário digitar 0 loop é interrompido e vai para o final do programa
            break;
        if((inv > 5) || (inv < 0)){
            printf("\nAlternativa invalida!");
            continue;
        }
        else{
            switch(leds[inv-1]){ //Verifica a condição (0) ou (1) para inverter
                case 1:
                    leds[inv-1] = 0;
                    break;
                case 0:
                    leds[inv-1] = 1;
                    break;
            }
        }
        printf("Condicao atual dos LEDs: \n"); //Exibe a condição atual dos LEDs
        for(int i=0; i<5; i++){
            printf("%d ",leds[i]);
        }
        printf("\n");
    }
    printf("\nVoce digitou '0' FIM do programa!\n\n");
    return 0;
}