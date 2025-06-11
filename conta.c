#include <stdio.h>

int main(){

    float m;
    printf("insira uma nota \n");
    scanf("%f", &m);

         if (m >= 0.0 && m < 2.0)
        {
        printf("você é muito burro, reprovadooo!!!!\n");
        }
        else if (m >= 2.0 && m < 5.0)
        {
            printf ("você tem direito a recuperação, estude mais!\n");
        }
        else if (m >= 5.0 && m <= 10.0)
        {
        printf("parabéns, você foi aprovado com sucesso!\n");
        }
        else
        {
         printf("nota inválida, tente novamente!\n");
        }
    return 0; 
    }     

