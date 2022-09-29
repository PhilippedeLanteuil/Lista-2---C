#include <stdio.h>
int main(){
int operacao;
float area, base, altura, lado, basemaior, basemenor;
printf("\nDigite 1 para calcular a area de um quadrado.");
printf("\nDigite 2 para calcular a area de um retangulo.");
printf("\nDigite 3 para calcular a area de um trapezio.");
printf("\n\nOpcao: ");
scanf("%d",& operacao);
switch(operacao){
case 1:
		printf("\nDigite o lado do quadrado: ");
		scanf("%f",&lado);
		area = lado * lado;
		printf("\nA area do quadrado eh: %f", area);
        break;
case 2:
		printf("\nDigite a base: ");
		scanf("%f",& base);
		printf("\nDigite a altura: ");
		scanf("%f",& altura);
		area = base * altura;
		printf("\nA area do retangulo eh: %f", area);
		break;
case 3:
		printf("\nDigite a base maior: ");
		scanf("%f",& basemaior);
		printf("\nDigite a altura: ");
		scanf("%f",& altura);
		printf("\nDigite a base menor: ");
		scanf("%f",& basemenor);
		area = ((basemaior + basemenor)/2) * altura;
		printf("\nA area do trapezio eh: %f", area);
		break;
	}
		return 0;
		}
	
	

