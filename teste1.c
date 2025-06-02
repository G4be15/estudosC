#include <stdio.h>

int main(){

    char* nome;
    int idade;
    
    printf("ola, me informe seu nome por favor \n");
    scanf("%s", nome);
    printf("quantos anos você tem?\n");
    scanf("%d", &idade);
    printf("ola %s, você tem %d anos\n", nome, idade);
    printf("obrigado por me informar seu nome e idade\n");
    printf ("me fala aonde você mora?\n");
    scanf("%s", nome);
    printf("obrigado por me informar onde você mora\n");


    return 0;





}