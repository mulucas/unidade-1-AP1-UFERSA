#include<stdio.h>

int main(){
	int tempo, velocidadeMedia, distancia;
	float litros;
	
	printf("Digite o tempo:");
	scanf("%d",&tempo);
	printf("Digite a velocidade:");
	scanf("%d",&velocidadeMedia);
	
	distancia = tempo*velocidadeMedia;
	litros = distancia*1/ 12;
	
	printf("%.3f",litros);
}
