#include <stdio.h>
int main(){
    int anos, a, b;
    double ac, bc;
    anos = 0;
    scanf("%d %d %lf %lf", &a, &b, &ac, &bc);
    while(a <= b){
        a *= (ac / 100.0) + 1.0;
        b *= (bc / 100.0) + 1.0;
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
