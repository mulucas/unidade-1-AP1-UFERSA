#include <stdio.h>
int main()
{
    double valor,D,E;
    scanf ("%lf",&valor);
    int N,n100,b,b2,n50,n20,n10,h,n5,n2,m1,B,m,n,o,p,q,r,s,t,u;
    N=valor;
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

    E=valor*100;
    //printf("antes: %lf\n",E);
    B=(int) E; //pega a parte inteira do valor
    //printf("DEPOIS: %d",B);
	m=B%100;
	printf("m: %d \n",m);
    n=m/50;
    printf("n: %d \n",n);
    o=m%50;
    p=o/25;
    q=o%25;
    r=q/10;
    s=q%10;
    t=s/5;
    u=s%5;

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",n100);
    printf ("%d nota(s) de R$ 50.00\n",n50);
    printf ("%d nota(s) de R$ 20.00\n",n20);
    printf ("%d nota(s) de R$ 10.00\n",n10);
    printf ("%d nota(s) de R$ 5.00\n",n5);
    printf ("%d nota(s) de R$ 2.00\n",n2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",m1);
    printf ("%d moeda(s) de R$ 0.50\n",n);
    printf ("%d moeda(s) de R$ 0.25\n",p);
    printf ("%d moeda(s) de R$ 0.10\n",r);
    printf ("%d moeda(s) de R$ 0.05\n",t);
    printf ("%d moeda(s) de R$ 0.01\n",u);

    return 0;
}
