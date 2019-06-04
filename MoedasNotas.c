#include <stdio.h>
int main(){
    double valor;
    scanf ("%lf",&valor);
    int N,n100,b,b2,n50,n20,n10,h,n5,n2,m1,B,m50,o,m25,m10,m05,m01;
    N=valor;//PEGA SO AS PARTE INTEIRAS, OU SEJA, AS NOTAS
    //printf("%d",N);
    n100=N/100;//conta as notas de 100
    b=N%100;// tira as notas de 100
    n50=b/50;//conta as notas de 50
    b2=b%50;//tira as notas de 50
    n20=b2/20;//conta as notas de 20
    b=b2%20;//tira as notas de 20
    n10=b/10;//conta as notas de 10
    b2=b%10;//tira as notas de 10
    n5=b2/5;//conta as notas de 5
    b=b2%5;//tira as notas de 5
    n2=b/2;//conta as notas de 2
    m1=b%2;// tira as notas de 2 o resultado é igual ao numeros de 1 real
	printf("valor antes: %lf \n",valor);
    valor=valor*100;
	printf("valor depois: %lf \n",valor);
    b=(int) valor; //pega a parte inteira do valor
    printf("b: %d \n",b);
	b2=b%100;  // para pegar somente os centavos
	printf("b2: %d \n",b2);
    m50=b2/50; // pega os 0,50 centavos
    b=b2%50;   //tira os 50 centavos
    m25=b/25;  // pega os 25 centavos
    b2=b%25;   //tira os 25 centavos
    m10=b2/10; // pega os 10 centavos
    b=b2%10;   //tira os 10 centavos
    m05=b/5;   // pega os 5 centavos
    m01=b%5;   //tira os 5 centavos
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",n100);
    printf ("%d nota(s) de R$ 50.00\n",n50);
    printf ("%d nota(s) de R$ 20.00\n",n20);
    printf ("%d nota(s) de R$ 10.00\n",n10);
    printf ("%d nota(s) de R$ 5.00\n",n5);
    printf ("%d nota(s) de R$ 2.00\n",n2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",m1);
    printf ("%d moeda(s) de R$ 0.50\n",m50);
    printf ("%d moeda(s) de R$ 0.25\n",m25);
    printf ("%d moeda(s) de R$ 0.10\n",m10);
    printf ("%d moeda(s) de R$ 0.05\n",m05);
    printf ("%d moeda(s) de R$ 0.01\n",m01);
    return 0;
}
