#include<stdio.h>

int main(){
	int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	int centavos, m50=0, m25=0, m10=0 ,m5=0, m1=0;
	int valor;
	
	scanf("%d", &valor);
	
	centavos = valor*100;
	
	n100 = valor / 100.0;
    valor %= 100; //resto da divisão por 100
    n50 = valor / 50.0;
    valor %= 50; //resto da divisão por 50
    n20 = valor / 20.0;
    valor %= 20; //resto da divisão por 20
    n10 = valor / 10.0;
    valor %= 10; //resto da divisão por 10
    n5 = valor / 5.0;
    valor %= 5; //resto da divisão por 5
    n2 = valor / 2.0;
    valor %= 2; //resto da divisão por 2
    n1 = valor / 1.0;
    valor %= 1; //resto da divisão por 1
    
    centavos = centavos % 100;
    m50 = centavos / 50;
    centavos %= 50;
    m25 = centavos / 25;
    centavos %= 25;
    m10 = centavos / 10;
    centavos %= 10;
    m5 = centavos / 5;
    centavos %= 5;
    m1 = centavos;
    
    printf("NOTAS:");
    printf(" nota(s) de R$ 100.00 = %d", n100);
    printf(" nota(s) de R$ 50.00= %d", n50);
    printf(" nota(s) de R$ 20.00= %d", n20);
    printf(" nota(s) de R$ 10.00= %d", n10);
    printf(" nota(s) de R$ 5.00= %d", n5);
    printf(" nota(s) de R$ 2.00= %d", n2);
    printf("MOEDAS:");
    printf(" moeda(s) de R$ 1.00= %d", n1);
    printf(" moeda(s) de R$ 0.50= %d", m50);
    printf(" moeda(s) de R$ 0.25= %d", m25);
    printf(" moeda(s) de R$ 0.10= %d", m10);
    printf(" moeda(s) de R$ 0.05= %d", m5);
    printf(" moeda(s) de R$ 0.01= %d", m1);
}
