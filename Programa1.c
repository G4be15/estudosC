#include <stdio.h>

int main(){
    char* nome;
    int idade;
    
    printf("Ola, usuario, como voce se chama?\n");
    scanf("%s", nome);
    printf("Quantos anos voce tem?\n");
    scanf("%d", &idade);

    printf("Bem vindo %s, voce tem %d anos\n\n", nome, idade);

    return 0;
}