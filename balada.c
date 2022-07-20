#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	int idade;
	setlocale(LC_ALL,"Portuguese");
	printf("-------------------------");
	printf("\nDigite a idade: \n");
	scanf("%i",&idade);
	if(idade>=18){
		printf("Pode entrar, seja bem vindx\n\n");
	}
	else{
		printf("Não pode entrar na balada! Vai dormir!\n\n");
	}
	printf("-----------------------------\n\n");
	system("pause");
}
