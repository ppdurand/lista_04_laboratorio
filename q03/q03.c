#include <stdio.h>

int main()
{
    int *pmenor = NULL, *pmaior = NULL, *pNumero = NULL;
    int numero, laco = 1, menor, maior;
    
    pmaior = &maior;
    pmenor = &menor;
    
    do{
        puts("Digite um numero: ");
        scanf("%d", &numero);
        pNumero = &numero;

        if(laco == 1){
            menor = *pNumero;
            maior = *pNumero;
            laco++;

        }
        else if(*pNumero > *pmaior){
            maior = *pNumero;
            
        }
        else if(*pNumero < *pmenor && *pNumero != 0){
            menor = *pNumero;            
        }        
        printf("Maior numero ate o momento: %d\nMenor numero ate o momento: %d\n", *pmaior, *pmenor);
        
    }while(numero != 0);

    return 0;
}