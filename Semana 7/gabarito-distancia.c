#include <stdio.h>
#include <math.h>

int main(){
double x1, y1, x2, y2, resultado=0;
    //leitura dos pontos
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    //equa��o para descobrir a dist�ncia
    resultado = sqrt(pow(x2-x1,2)+pow(y2-y1,2));


    //exibi��o do resultado
    printf("%.4lf\n", resultado);
}
