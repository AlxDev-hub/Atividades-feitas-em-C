// Comparar se o numero digitado e igual, maior ou menor que 10

#include<stdio.h>

int main(){

	int num;

	printf("Digite um numero:");
	scanf("%d", &num);

	if (num>10){
		printf("\n\n O numero e maior que 10");
	}else if (num == 10){
		printf("\n\n Voce acertou \n O numero e igual a 10.");
	}else if (num < 10){
		printf("\n\n O numero e menor que 10");
	}
return(0);
}
	


