#include <stdio.h>

int main(){
int X, Y;
float total;
    scanf("%d %d", &X, &Y); //leitura de X e Y;
    switch(X){ //condicionando todos os casos, ou todas as opções;
        case 1:
            total = Y*4;
            break;
        case 2:
            total = Y*4.5;
            break;
        case 3:
            total = Y*5;
            break;
        case 4:
            total = Y*2;
            break;
        case 5:
            total = Y*1.5;
            break;
    }
    printf("Total: R$%.2f\n", total); //exibindo resultado
}
