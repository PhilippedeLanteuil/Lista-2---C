#include <stdio.h>
int main() {
    int x, y, aux;
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&x);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&y);
    
    aux = x;
    x = y;
    y = aux;
    
    printf("\n O valor de 'X'eh: %d ", x);
	printf("\n O valor de 'Y' é: %d ", y);
	
	return 0;
}
    
