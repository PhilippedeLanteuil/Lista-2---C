#include <stdio.h>
int main(){
 
    int ano;
 
    printf("\nDigite um ano (considerando que estamos em 2022): ");
 
    scanf("%d",&ano);

    if(ano == 2022 && ano % 4 == 0  &&  ano % 100 != 0 || ano % 400 ==0 ){

    printf("\nO ano eh bissexto\n");

    }

    else{

    printf("\nO ano nao eh bissexto\n");

    }
    if(ano < 2022 && ano % 4 == 0  &&  ano % 100 != 0 || ano % 400 ==0 ){

    printf("\nO ano foi bissexto\n");

    }

    else{

    printf("\nO ano nao foi bissexto\n");

    }
    if(ano > 2022 && ano % 4 == 0  &&  ano % 100 != 0 || ano % 400 ==0 ){

    printf("\nO ano sera bissexto\n");

    }

    else{

    printf("\nO ano nao sera bissexto\n");

    }

        return 0;

}
