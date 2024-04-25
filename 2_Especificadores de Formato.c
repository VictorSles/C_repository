#include <stdio.h>
int main(){
    printf("Eu posso digitar um numero inteiro: %i \n", 10);
    printf("Eu posso digitar um numero decimal %d \n", 10.893424);
    printf("Eu posso digitar um numero hexadecimal %x \n", 0x2F8A);
    printf("Exemplos de números flutuantes %.2f \n", 12.232344);
    printf("Eu posso digitar valores de Char: %c \n", 'a');
    printf("Eu posso digitar valores alfanuméricos: %s", "Eu sou topppp \n \n");

/* 
! Para especificar valores de variáveis em C, eu preciso ter em mente a existência de determinados valores, sendo eles chamados de ESPECIFICADORES DE FORMATO que são inseridos para especificar determinado tipo(s) de variável(s), no qual são escrito após o %:

>>> "%d" ou "i" = Números inteiros em base decimal
>>> "%x" = Numeros inteiros em base hexadecimal
>>> "%f" = Numeros em ponto flutuante
>>> "%e" = Numeros em notação cientifica
>>> "%c" = texto (caracteres alfanuméricos), somete um valor
>>> "%s" = Sequencia de texto (caracteres alfanumericos)
>>> ".<num>" = Especificar quantas casas após a virgula SERÁ IMPRESSO

EX:
*/
/* 
* Para emitir determinado comando na saída/impressão dos dados, eu posso usar as SEQUÊNCIAS DE ESCAPE:

>>> "\a" = Tocar um bipe ou alarme sonoro padrão do sistema
>>> "\b" = Backspace (TAB)
>>> "\n" = Quebra de linha
>>> "\t" = Tabulação horizontal 
>>> "\r" = Retorna ao início da linha
>>> "\0" = Caractere Nulo
>>> "\v" = Tabulação vertical
*/
}