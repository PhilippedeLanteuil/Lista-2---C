#include <stdio.h>
int main() {
	 float a, b, c;
    printf("\nDigite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C: ");
    scanf("%f", &c);
    if((a*a)==(b*b)+ (c*c)){
        printf("\nO triangulo eh retangulo!");
    }
    else if(a >=b + c){
    printf("\nNao eh um triangulo!");
    }
    else{
    	printf("\nEh um triangulo nao retangulo!");
	}
        return 0;
    }
