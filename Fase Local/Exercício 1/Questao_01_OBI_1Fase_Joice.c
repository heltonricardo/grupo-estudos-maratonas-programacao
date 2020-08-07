#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Três possibilidades de trajeto
Saída pelo sensor 1 : 3km + n*(8km) + 3km
Saída pelo sensor 2 : 3km + n*(8km) + 4km
Saída pelo sensor 3 : 3km + n*(8km) + 5km
*/

int main(){
    //lendo a distância total percorrida
    int Dtotal;

    scanf("%d", &Dtotal);

    if(Dtotal < 6 || Dtotal > 800008){
        printf("Erro");
        return 0;
    }

    //int Demissor = 3;
    //int voltas = (Dtotal - Demissor) / 8;  //ele pode dar N voltas no acelerador
    //int restante = Dtotal - Demissor - (voltas * 8); // o restante depois do trajeto do emissor e das N voltas

    //de forma simplicada:
    int restante = (Dtotal - 3) % 8;

    switch(restante){
        case 3: printf("1");
        break;

        case 4: printf("2");
        break;

        case 5: printf("3");
        break;
    }

    return 0;
}
