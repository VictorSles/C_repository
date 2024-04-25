/* IMC */ 
#include <stdio.h>
int main(){
// Nome:
    float peso, altura, IMC;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    IMC = (peso/(altura*altura));
    printf("O valor do seu IMC é igual a: '%f'\n", IMC);
}