#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


float lerNumeros(const char* prompt);

int main(void)
{
    char option_str[10];
    int option;
    char temp_num1[10];
    float num1;
    char temp_num2[10];
    float num2;

    do
    {
        printf("\n|-----------Escolha o tipo da sua conta!-----------|\n");
        printf("[1] - Soma.\n");
        printf("[2] - Subtração.\n");
        printf("[3] - Multiplicação.\n");
        printf("[4] - Divisão.\n");
        printf("[5] - Raiz Quadrada.\n");
        printf("[6] - Potência.\n");
        printf("[7] - Sair.\n");
        printf("Escolha uma opção: ");

        fgets(option_str, sizeof(option_str), stdin);
        option_str[strcspn(option_str, "\n")] = '\0';
        option = atoi(option_str);

        switch (option)
        {
        case 1:
            printf("Tipo selecionado: Soma.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            num2 = lerNumeros("Escreva um novo número:\n>>> ");
            printf("A soma de seus números resulta em:\n>>> %.2f", num1 + num2);
            break;
        case 2:
            printf("Tipo selecionado: Subtração.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            num2 = lerNumeros("Escreva um novo número>\n>>>");
            printf("O resultado de seus números é:\n>>> %.2f", num1 - num2);
            break;
        case 3:
            printf("Tipo selecionado: Multiplicação.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            num2 = lerNumeros("Escreva um novo número:\n>>> ");
            printf("O resultado de seus números é:\n >>> %.2f", num1 * num2);
            break;
        case 4:
            printf("Tipo selecionado: Divisão.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            num2 = lerNumeros("Escreva um novo número:\n>>> ");
            if (num2 == 0 || num1 == 0)
            {
             printf("Valor igual a 0, conta sem resultado");  
             break;
            }else {
                printf("O resultado de seus números é:\n >>> %.2f", num1 / num2);
            } 
            break;
        case 5:
            printf("Tipo selecionado: Raiz Quadrada.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            printf("A raiz quadrada de seu número é:\n >>> %.2lf", sqrtf(num1));
            break;
        case 6:
            printf("Tipo selecionado: Potência.\n");
            num1 = lerNumeros("Escreva um número:\n>>> ");
            num2 = lerNumeros("Escreva um novo número:\n>>> ");
            printf("A potência do seu número é:\n >>> %.2f", pow(num1, num2));
            break;
        case 7:
            printf("Saindo do programa...");
        break;
        default:
            break;
        }
    } while (option != 7);

    return 0;
}

float lerNumeros(const char* prompt){
    char temp_num[20];
    float num;
    printf("%s", prompt);
    fgets(temp_num, sizeof(temp_num), stdin);
    temp_num[strcspn(temp_num, "\n")] = '\0';
    num = atof(temp_num);

    return num;
}