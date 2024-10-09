#include <stdio.h>
#include <math.h>

float cel, far;

int main()
{
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &far);
    
    cel = ((far-32)*5)/9;
    
    printf("Sua temperatura em Celsius é de %.2f", cel);
    return 0;
}