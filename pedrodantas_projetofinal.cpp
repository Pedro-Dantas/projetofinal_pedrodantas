//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina: M2LPBA - 201701
//Programação de Computadores e Dispositivos Móveis
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
	

	//Este FOR é utilizado para pedir que o usuario digite valores que serão armazenados em um vetor e posteiormente fazendo os calculos. 
	for(i=0; i<5; i++){
		
		printf("\n Insira um valor inteiro para a posicao[%d]: ", i);
			scanf("%d", &vet[i]);
				soma = soma + vet[i];
					mult = mult * vet[i];
		
	}
	
	//Informar o valor da soma e informar se a soma é positiva ou negativa.
	if(soma>=0){
		printf("\n O valor da soma eh %d\n", soma);
			printf(" O valor da soma eh positiva\n");
	}
	
	else{
		printf("\n O valor da soma eh %d\n", soma);
			printf(" O valor da soma eh negativa\n");
	}
	
	
	//Informar o valor da multiplicação e informar se a mesma é positiva ou negativa.
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

