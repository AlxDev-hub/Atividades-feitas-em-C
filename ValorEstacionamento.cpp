// Informar o tipo de carro e as horas que o veiculo ficara estacionado
// Caso o tipo do carro digitado esteja fora do escopo do codigo, informar erro
// No final imprimir o valor de pagamento do estacionamento de acordo com o dados digitados

#include<stdio.h>

int main () {

	char tipo;
	float horas, pagamento;

	printf("Informe o tipo do veiculo('c' para carro, 'o' para onibus, 't' para caminhao):");
	scanf("%c", &tipo);

	printf("Informe o numero de horas que o veiculo esteve estacionado:");
	scanf("%f", &horas);

	if(tipo == 'c'){
		pagamento=horas*2;
	}
    else if(tipo == 'o'){
		pagamento=horas*3;
    }
    else if(tipo == 't'){
		pagamento=horas*4;
    }
    else{
	printf("Tipo de veiculo invalido");
    }

	printf("\n O valor pago pelo estacionamento e: %.2f", pagamento);
return(0);
}
