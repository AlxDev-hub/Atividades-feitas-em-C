// Fazer uma divisao e caso o denominador seja 0, imprimir mensagem de erro

#include<stdio.h>

int main(){

	float a, b;

	printf("Digite dois numeros:");
	scanf("%f %f", &a, &b);

	if(b!=0){
		printf("%f \n", a/b);
	}else{
        printf("Nao existe divisao por zero \n");
	}

return(0);
}
