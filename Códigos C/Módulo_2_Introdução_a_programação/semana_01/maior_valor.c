//Dados dois números distintos, informe qual dele é o maior.

#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    
    if (b == a)
    {
        printf("%d e igual %d", a, b);
    }
    else
    {
        if (a > b){
            printf("%d e maior que %d", a, b);
        }
        if (b > a){
            printf("%d e maior que %d", b, a);
        }
    }
    return 0;    
}

int main(){
    
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    maior(num1, num2);
    printf("\n\n");
   
    system ("PAUSE");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA