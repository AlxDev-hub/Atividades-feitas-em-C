/*Este código consiste em verificar se o número digitado pelo usuário é igual ou menor que 10 */
#include<stdio.h>

int main(){

	int num;

	printf("Digite um numero:");
	scanf("%d", &num);

	if(num==10){
		printf("\n\n Voce acertou \n Numero igual a 10. \n");
	}else{
            printf("\n\n Voce errou \n Numero diferente de 10. \n");
    }

return(0);
}
