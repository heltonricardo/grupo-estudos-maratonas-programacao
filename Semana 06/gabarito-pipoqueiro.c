#include <stdio.h>

int main(){
int E1, E2, E3, aux1=0, aux2=0, aux3=0;

    //leitura da qtd de clientes por arquibancada;
    scanf("%d", &E1);
    scanf("%d", &E2);
    scanf("%d", &E3);

    //equa��o para verificar qnt tempo ser� gasto quando o pipoqueiro
    //estiver em qualquer uma das 3 arquibancadas
    aux1 = (E2*2) + (E3*4);
    aux2 = (E1*2) + (E3*2);
    aux3 = (E2*2) + (E1*4);

    //verifica��o para ver qual das equa��es gastou menos tempo
    if(aux1<aux2 && aux1<aux3){
        printf("%d\n", aux1);
    }if(aux2<aux1 && aux2<aux3){
        printf("%d\n", aux2);
    }if(aux3<aux1 && aux3<aux2){
        printf("%d\n", aux3);
    }

    return 0;
}
