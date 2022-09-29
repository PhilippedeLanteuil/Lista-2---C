#include <stdio.h>
int main(){
	int estoque, fornecido, estoqueatualizado;
	printf("\nDigite o numero de itens em estoque: ");
    scanf("%d",&estoque);
    printf("\nDigite o numero de itens a serem fornecidos: ");
    scanf("%d",&fornecido);
    if(estoque>=fornecido) {
    estoqueatualizado = estoque - fornecido;
	printf("\nO estoque atualizado eh: %d", estoqueatualizado);	
	}
	else {
	printf("\nNao ha itens suficientes em estoque para o pedido!");	
	}
	return 0;
}

