#include <stdio.h>
#include <stdlib.h>


int main()
{
    float v;
    float d;
    printf("Digite o valor em R$ da mercadoria: ");
    scanf("%f", &v);
    printf("Digite a porcentagem do desconto: ");
    scanf("%f", &d);
    float vf = v-(v * (d/100));
    printf("O valor final da mercadoria eh de R$ %.2f\n", vf);

    return 0;
}
