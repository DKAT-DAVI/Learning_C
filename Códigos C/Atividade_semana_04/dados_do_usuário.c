/*Questão 06 - Fazer um programa que leia o nome, endereço e telefone do usuário e mostre em seguida.*/
#include <stdio.h>

int main()
{
    char nome[50];
    char rua[50], bairro[50],num[50], cel[50], idade[50], cep[50];

    printf("=-=-=-=-=-=-=-=-=-=-=-=CADASTRO=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite seu nome completo: ");
    fgets(nome,50,stdin);

    printf("\n=-=DIGITE SEU ENDERECO=-=");
    
    printf("\nRUA: ");
    fgets(rua,50,stdin);

    printf("\nBAIRRO: ");
    fgets(bairro,50,stdin);

    printf("\nNUMERO: ");
    fgets(num,50,stdin);
    
    printf("\nCEP: ");
    fgets(cep,50,stdin);

    printf("\nDigite seu numero de celular: ");
    fgets(cel,50,stdin);

    printf("\nDigite sua idade: ");
    fgets(idade,50,stdin);

    system("PAUSE");
    return 0;
}
//NOME:DAVI KALEL ANDRADE TEIXEIRA