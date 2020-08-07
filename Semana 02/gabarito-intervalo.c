#include <stdio.h>

int main(){
double variavel;
    scanf("%lf", &variavel);
    if(variavel>=0 && variavel<=25){
        printf("Intervalo [0,25]\n");
    }if(variavel>25 && variavel<=50){
        printf("Intervalo (25,50]\n");
    }if(variavel>50 && variavel <=75){
        printf("Intervalo (50,75]\n");
    }if(variavel>75 && variavel <=100){
        printf("Intervalo (75,100]\n");
    }if(variavel<0 || variavel>100){
        printf("Fora de Intervalo\n");
    }
}
