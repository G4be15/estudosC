#include <stdio.h>

    int main() {

    float quantidade_Kg =0.0;
    float quantidade_g =0.0;
    float quantidade_dia_g=0.50;

    printf("informe a quantidade de alimento em Kg: \n");
    scanf("%f", &quantidade_Kg);
    float quantidade_G=quantidade_Kg*1000;
    
    printf("a quantidade de alimento em gramas é: %.2f g\n", quantidade_G);
    printf("seu alimento durará %.2f dias\n", quantidade_G/1000);


    return 0;
}
    