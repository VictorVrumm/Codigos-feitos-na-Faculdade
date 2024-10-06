#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main(void){

char v1 [11];
    printf("Informe uma palavra: ");
    fgets(v1,11, stdin);
    fputs(v1, stdout);
    return 0;
}