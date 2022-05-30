#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 6

int main(){
    int vetor[tam], aux;
    int *pVetor;

    srand(time(NULL));

    for(int i = 0; i < tam; i++){
        vetor[i] = rand() % 10;
    }
    pVetor = &vetor;
    puts("Vetor: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }
    puts("\n");
    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = *(pVetor + j);
                vetor[j] = *(pVetor + j+ 1);
                vetor[j + 1] = aux;
            }
        }
    }
    puts("Vetor Bolha: ");
        for(int i = 0; i < tam; i++){
            printf("%d ", vetor[i]);
        }
}