#include <stdio.h>
int main() {
	float icm, peso, altura;
	printf("\nDigite seu peso em kg: ");
	scanf("%f",&peso);
	printf("\nDigite sua altura em metros: ");
	scanf("%f",&altura);
	icm = (peso)/ (altura * altura);
	if (icm<= 18.5){
		printf("\nAbaixo do peso normal.");
	}
	else if (icm > 18.5 && icm<=25)  {
		printf("\nPeso normal.", icm);
	}
	else if (icm > 25 && icm <=30){
		printf("\nAcima do peso normal.");
	}
	else if (icm>30){
		printf("\nPeso excessivo.");
	}
	return 0;
}
	
