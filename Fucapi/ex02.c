#include <stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("A média da nota: '%.2f'", media);
}