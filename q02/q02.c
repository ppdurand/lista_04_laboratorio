//Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.

#include <stdio.h>

int main()
{
    int *p1= NULL, *p2 = NULL; 
    int aux, n1 = 10, n2 = 20;
    
    p1 = &n1;
    p2 = &n2;
    
    puts("Antes da Troca: ");
    printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);
    
    aux = *p2;
    n2 = *p1;
    n1 = aux;
    
    puts("Depois da Troca: ");
    printf("Numero 1: %d\nNumero 2: %d\n", n1, n2);
    

    return 0;
}