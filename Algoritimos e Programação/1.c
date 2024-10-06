#include <stdio.h>
#include <math.h>

float n, qua, cub, ra, cb;

int main()
{
    printf("Digite um número: ");
    scanf("%f", &n);
    
    qua = pow(n, 2);
    cub = pow(n, 3);
    ra = sqrt(n);
    cb = cbrt(n);
    
    printf("Número ao quadrado %.2f\n", qua);
    printf("Número ao cubo %.2f\n", cub);
    printf("Raíz quadrada ao número %.2f\n", ra);
    printf("Raíz cubica ao número %.2f\n", cb);
    
    return 0;
}