#include <stdio.h>
#include <math.h>

// função que calcula a distancia
float calculaDistancia(int x1, int y1, int x2, int y2){
return sqrt(pow(x2-x1,2) + pow(y2-y1, 2) );
}
int main () {

int x1,y1,x2,y2;
float distancia;

 prinf("Informe as coordenadas para o primeiro ponto: ");
   scanf("%i %i", &x1, &x1);
   prinf("Informe as coordenadas para o segundo ponto: ");
   scanf("%i %i", &x2, &x2);

distancia = calculadaDistancia(x1,y1,x2,y2);

printf("Distancia: %f" , distancia);
}

