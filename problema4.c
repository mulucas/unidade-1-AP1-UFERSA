#include <stdio.h>
int main()
{
    int forca;
    char nome[100];
    
    scanf("%s",&nome);
    scanf("%d", &forca);
    
    if((nome[0]=='t' && nome[1]=='h' && nome[2]=='o' && nome[3]=='r')||
		(nome[0]=='T' && nome[1]=='H' && nome[2]=='O' && nome[3]=='R')){
        printf("Voce conseguiu\n");
    }else{
		printf("%s voce nao conseguiu\n",nome);
	}
    return 0;
}

