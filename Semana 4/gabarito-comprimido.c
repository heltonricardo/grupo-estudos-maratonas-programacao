#include <stdio.h>
#include <math.h>


int main(){
int C, qtd;
    scanf("%d", &C); //leitura
    qtd = pow(2, C);

    //analisando o ex. percebe-se que a qtd de figuras é =  2^C;
    //sendo 2 o número de possibilidades (bolinha branca ou preta) e C o número de comprimidos;

    printf("%d\n", qtd);


    return 0;
}
