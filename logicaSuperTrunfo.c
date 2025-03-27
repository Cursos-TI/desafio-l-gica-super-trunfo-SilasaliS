#include <stdio.h>

int main() {
    // Declaracao de variaveis para a primeira cidade
    char nome1[50];
    int populacao1;
    float pib1;
    int area1;

    // Recebe os dados da primeira cidade
    printf("Nome da cidade:");
    scanf("%s", &nome1);

    printf("População da cidade:");
    scanf("%d", &populacao1);

    printf("PIB da cidade:");
    scanf("%f", &pib1);

    printf("Área:");
    scanf(" %d", &area1);

    // Calcula alguns atributos da primeira cidade
    float densidade1 = (float) populacao1 / area1;
    float Ppc1 = (float) pib1 / populacao1;
    float superpoder1 = (float) populacao1 + pib1 + area1 + Ppc1 - densidade1;

    // Exibe os resultados da primeira cidade
    printf("\n");
    printf("Nome da cidade: %s \n", nome1);
    printf("População da cidade: %d \n", populacao1);
    printf("PIB da cidade: %f de reais\n", pib1);
    printf("Area da cidade: %d km² \n", area1);
    printf("Densidade da cidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n\n", Ppc1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    // Repete o mesmo processo para a segunda cidade
    char nome2[50];
    int populacao2;
    float pib2;
    int area2;

    printf("Nome da segunda cidade:");
    scanf("%s", &nome2);

    printf("População da cidade:");
    scanf("%d", &populacao2);

    printf("PIB da cidade:");
    scanf("%f", &pib2);

    printf("Área:");
    scanf(" %d", &area2);

    float densidade2 = (float) populacao2 / area2;
    float Ppc2 = (float) pib2 / populacao2;
    float superpoder2 = (float) populacao2 + pib2 + area2 + Ppc2 - densidade2;

    printf("\n");
    printf("Nome da cidade: %s \n", nome2);
    printf("População da cidade: %d \n", populacao2);
    printf("PIB da cidade: %f de reais\n", pib2);
    printf("Area da cidade: %d km²\n", area2);
    printf("Densidade da cidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n\n", Ppc2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    // Registra o resultado da comparacao dos atributos das cidades
    int resultadopopulacao = populacao1 > populacao2;
    int resultadopib = pib1 > pib2;
    int resultadoarea = area1 > area2;
    int resultadodensidade = densidade1 < densidade2;
    int resultadoppc = Ppc1 > Ppc2;
    int resultadosuperpoder = superpoder1 > superpoder2;

    // Permite ao usuario escolher qual o primeiro atributo para comparar
    printf("Escolha a o atributo:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Densidade\n");
    printf("5. PIB per capita\n");
    printf("6. Super poder\n");
    int atributo1;
    scanf("%d", &atributo1);

    int resultado1;

    switch (atributo1)
    {
        case 1:
        printf("Voce escolheu população\n");
        resultado1 = resultadopopulacao;
        break;
        
        case 2:
        printf("Voce escolheu PIB\n");
        resultado1 = resultadopib;
        break;

        case 3:
        printf("Voce escolheu Area\n");
        resultado1 = resultadoarea;
        break;

        case 4:
        printf("Voce escolheu Densidade\n");
        resultado1 = resultadodensidade;
        break;

        case 5:
        printf("Voce escolheu PIB per capita\n");
        resultado1 = resultadoppc;
        break;

        case 6:
        printf("Voce escolheu Super poder\n");
        resultado1 = resultadosuperpoder;
        break;

        default:
        printf("Opção inválida");
        break;
    }

    // Permite ao usuario escolher o segundo atributo para comparar
    printf("Escolha o segundo atributo:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Area\n");
    printf("4. Densidade\n");
    printf("5. PIB per capita\n");
    printf("6. Super poder\n");
    int atributo2;
    scanf("%d", &atributo2);
    printf("\n");

    int resultado2;

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (atributo2)
        {
            case 1:
            printf("Voce escolheu população\n");
            resultado2 = resultadopopulacao;
            break;
            
            case 2:
            printf("Voce escolheu PIB\n");
            resultado2 = resultadopib;
            break;
    
            case 3:
            printf("Voce escolheu Area\n");
            resultado2 = resultadoarea;
            break;
    
            case 4:
            printf("Voce escolheu Densidade\n");
            resultado2 = resultadodensidade;
            break;
    
            case 5:
            printf("Voce escolheu PIB per capita\n");
            resultado2 = resultadoppc;
            break;
    
            case 6:
            printf("Voce escolheu Super poder\n");
            resultado2 = resultadosuperpoder;
            break;
    
            default:
            printf("Opção inválida");
            break;
        }
            // Determina qual cidade ganhou ou se houve um empate
            printf("\n");
            if (resultado1 && resultado2)
            {
                printf("A cidade %s ganhou!\n", nome1);
            }
            else if(resultado1 != resultado2)
            {
                printf("Empate!\n");
            }
            else
            {
                printf("A cidade %s ganhou!\n", nome2);
            }  
    }

    return 0;
}