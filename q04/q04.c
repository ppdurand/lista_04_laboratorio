/*Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste
o vetor com tipos de dados diferentes, analise os endere ̧cos. O que vocˆe observou?*/

#include <stdio.h>
#define TAM 5

int main(){
    int vetorint[TAM], vetorfloat[TAM], vetorchar[TAM];

    puts("VETOR INTEIRO");
    for (int i = 0; i < TAM; i++){
        printf("Insira um inteiro para o %d valor: ", i + 1);
        scanf("%d", &vetorint[i]);
    }
    puts("VALORES | ENDERECOS\n");
    for (int i = 0; i < TAM; i++){
        printf("%d         %p\n", vetorint[i], &vetorint[i]);
    }
    
   
   
    puts("VETOR FLOAT");
    for (int i = 0; i < TAM; i++){
        printf("Insira um inteiro para o %d valor: ", i + 1);
        scanf("%f", &vetorfloat[i]);
    }
    puts("VALORES | ENDERECOS\n");
    for (int i = 0; i < TAM; i++){
        printf("%0.2f         %p\n", vetorfloat[i], &vetorfloat[i]);
    }
    
    
    
    puts("VETOR CHARACTERE");
    for (int i = 0; i < TAM; i++){
        printf("Insira um inteiro para o %d valor: ", i + 1);
        scanf("%c", vetorchar[i]);
    }
    
    puts("VALORES | ENDERECOS\n");
    for (int i = 0; i < TAM; i++){
        printf("%c         %p\n", vetorchar[i], &vetorchar[i]);
    }
    return 0;
}