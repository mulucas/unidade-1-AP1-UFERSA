#include <stdio.h>
int main() {
    int anos;
    long populacaoA, populacaoB;
    double taxaCrescimentoA, taxaCrescimentoB;
 
    anos = 0;
    scanf("%d %d %lf %lf", &populacaoA, &populacaoB, &taxaCrescimentoA, &taxaCrescimentoB);
    while(populacaoA <= populacaoB){
       	populacaoA+= (long) (populacaoA*taxaCrescimentoA/100);
       	populacaoB+= (long) (populacaoB*taxaCrescimentoB/100);
        anos++;
        if (anos > 100){
            printf("Mais de 1 seculo.\n");
            break;
        }
    }
    if (anos <= 100){
        printf("%d anos.\n", anos);
	}
    return 0;
}
