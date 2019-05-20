#include<stdio.h>

int main(){
	int tempo, velocidadeMedia, distancia;
	float litros;
	
	scanf("%d",&tempo);
	scanf("%d",&velocidadeMedia);
	
	distancia = tempo*velocidadeMedia;
	litros = distancia*1/ 12;
	
	printf("%.3f",litros);
}
