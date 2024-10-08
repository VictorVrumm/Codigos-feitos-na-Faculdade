#include <stdio.h>
#include <math.h>

float area, rai;

int main()
{
    printf("Digite o número do raio: ");
    scanf("%f", &rai);
    
    rai = pow(rai, 2);
    
    printf("Sua area é %.2f", area = 3.14*rai);
    return 0;
}