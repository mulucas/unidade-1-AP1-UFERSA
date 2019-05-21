#include <stdio.h>
int main()
{
    int forca;
    char nome[100];
    
    scanf("%s",nome);
    scanf("%d", &forca);
    if(nome[0]=='t' && nome[1]=='h' && nome[2]=='o' && nome[3]=='r'){
        printf("Voce conseguiu\n");
    }else{
		printf("nao conseguiu\n");
	}
    return 0;
}

