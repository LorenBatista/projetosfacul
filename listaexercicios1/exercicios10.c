#include <stdio.h>

void main(){
    char letra;
    int num;
    printf("Entre com a letra e um inteiro:\n");
    scanf("%c %d", &letra, &num);
    printf("Você informou a letra %c e o inteiro %d", letra, num);
}