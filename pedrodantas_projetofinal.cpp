//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina: M2LPBA - 201701
//Programa��o de Computadores e Dispositivos M�veis
//Aluno.....: Pedro de Sousa Dantas
//******************************************************

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]) {
	
	int vet[5];
	int i;
	int soma = 0;
	int	mult = 1;
	

	//Este FOR � utilizado para pedir que o usuario digite valores que ser�o armazenados em um vetor e posteiormente fazendo os calculos. 
	for(i=0; i<5; i++){
		
		printf("\n Insira um valor inteiro para a posicao[%d]: ", i);
			scanf("%d", &vet[i]);
				soma = soma + vet[i];
					mult = mult * vet[i];
		
	}
	
	//Informar o valor da soma e informar se a soma � positiva ou negativa.
	if(soma>=0){
		printf("\n O valor da soma eh %d\n", soma);
			printf(" O valor da soma eh positiva\n");
	}
	
	else{
		printf("\n O valor da soma eh %d\n", soma);
			printf(" O valor da soma eh negativa\n");
	}
	
	
	//Informar o valor da multiplica��o e informar se a mesma � positiva ou negativa.
	if(mult>=0){
		printf("\n O valor da multiplicacao eh %d\n", mult);
			printf(" O valor da multiplicacao eh positiva\n");
	}
	
	else{
		printf("\n O valor da multiplicacao eh %d\n", mult);
			printf(" O valor da multiplicacao eh negativa\n");
	}	
	
	getchar();

	return 0;
	
}

