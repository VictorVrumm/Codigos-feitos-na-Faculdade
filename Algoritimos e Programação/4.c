#include <stdio.h>

float n;

int main()
{
    printf("Digite um número: ");
    scanf("%f", &n);

    if(n>0)
    {
        printf("O número digitado é positivo");
    } else {
        printf("O número digitado é negativo");
    }
    return 0;
}