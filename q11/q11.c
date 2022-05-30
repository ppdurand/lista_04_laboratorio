#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10
#define n 7

int main(){

    int x[tam], y[tam], m[n][n];
    //int *pont;
    //gerando valores para os vetores x e y
    for(int i = 0; i < tam; i++){
        x[i] = rand() % 10;  
        y[i] = rand() % 10;
    }

    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - 1; j++){
            if(x == i && y == j){
                m[i][j] += 1;
            }else{
                m[i][j] += 0;
            }
        }
    }
    puts("Vetor X: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", x[i]);
    }
    puts("\n");
    puts("Vetor Y: ");
    for(int i = 0; i < tam; i++){
        printf("%d ", y[i]);
    }
    puts("\n");
    puts("Matriz;\n");
    
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", m[i][j]);
        }
        puts("\n");
    }

    return 0;
}