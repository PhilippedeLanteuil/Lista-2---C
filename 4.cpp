#include <stdio.h>
int main(){
float num, raio, area, perimetro;
    printf("\nDigite 1 para calcular a area.");
    printf("\nDigite 2 para calcular o perimetro.");
    printf("\nOpcao: ");
    scanf("%f",&num);
    if (num == 1){
    	printf("\nDigite o raio para calcular a area: ");
        scanf("%f",&raio);
     area = 3.14 * raio * raio;
	 printf("\nA area da circunferencia foi: %f", area);	    	    	
	}
	else if ( num==2 ){
		printf("\nDigite o raio para calcular o perimetro: ");
        scanf("%f",&raio);
		perimetro = 2 * 3.14 * raio;
		printf("\nO perimetro da circunferencia foi: %f", perimetro);	
	}
	else{
		printf("\nIndicador de operacao mal fornecido!");
	}
}
