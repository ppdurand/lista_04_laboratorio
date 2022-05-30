/*Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.*/

#include <stdio.h>

int main(){
    int soma, n1 = 5, n2 = 10;
    int* p1 = &n1;
    int* p2 = &n2;

    printf("Valores iniciais: %d e %d\n", n1, n2);
    printf("Valores na memoria: %p e %p\n", &n1, &n2);

    soma = *p1 + *p2;

    printf("Valor da soma: %d\n", soma);
    printf("Endereço da memoria: %p", &soma);
}