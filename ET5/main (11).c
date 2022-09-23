#include <stdio.h>

int main()
{
    struct {
        char nome[50], email[50], tel[15];
    }Digitos;
    int total1=0,total2=0,total3=0;
    printf("Digite seu nome: ");
    scanf("%s", Digitos.nome);
    printf("Digite seu e-mail: ");
    scanf("%s", Digitos.email);
    printf("Digite seu telefone: ");
    scanf("%s", Digitos.tel);
    printf("--------------------\n");
    while (Digitos.nome[total1] != '\0') {
        total1++;
    }
    printf("nome : %d digitos: \n", total1);
    while(Digitos.email[total2] != '\0'){
        total2++;
    }
    printf("E-mail: %d digitos: \n", total2);
    while(Digitos.tel[total3] != '\0'){
        total3++;
    }
    printf("telefone: %d Digitos: \n", total3);

    return 0;
}
