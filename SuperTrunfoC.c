#include <stdio.h>

int main(){

    //--CARTA 1--

    char Estado1[55];
    char CodigoCidade1[13];
    char NomeCidade1[69];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    //--CADASTRO CARTA 1

    printf("Digite o Estado referente à Carta:\n");
    scanf(" %s", Estado1);

    printf("\nDigite o código da Cidade (Ex: A01, A02..):\n");
    scanf(" %s", CodigoCidade1);

    printf("\nDigite o nome da Cidade:\n");
    scanf(" %s", NomeCidade1);

    printf("\nDigite a quantidade de pessoas que existem nessa Cidade:\n");
    scanf(" %d", &Populacao1);

    printf("\nDigite a Área km²:\n");
    scanf(" %f", &Area1);

    printf("\nDigite o PIB:\n");
    scanf(" %f", &PIB1);

    printf("\nDigite a quantidade de Pontos Turísticos:\n");
    scanf(" %d", &PontosTuristicos1);

    //--EXIBIÇÃO CARTA 1--
 
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("\nEstado: %s\n", Estado1);
    printf("Código: %s\n", CodigoCidade1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f km²\n", Area1);
    printf("PIB: %f reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);

    //--CARTA 2--

    char Estado2[55];
    char CodigoCidade2[13];
    char NomeCidade2[69];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    //--CADASTRO CARTA 2--

    printf("Digite o Estado referente à Carta:\n");
    scanf(" %s", Estado2);

    printf("\nDigite o código da Cidade (Ex: A01, A02..):\n");
    scanf(" %s", CodigoCidade2);

    printf("\nDigite o nome da Cidade:\n");
    scanf(" %s", NomeCidade2);

    printf("\nDigite a quantidade de pessoas que existem nessa Cidade:\n");
    scanf(" %d", &Populacao2);

    printf("\nDigite a Área km²:\n");
    scanf(" %f", &Area2);

    printf("\nDigite o PIB:\n");
    scanf(" %f", &PIB2);

    printf("\nDigite a quantidade de Pontos Turísticos:\n");
    scanf(" %d", &PontosTuristicos2);

    //--EXIBIÇÃO CARTA 2--

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("\nEstado: %s\n", Estado2);
    printf("Código: %s\n", CodigoCidade2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f km²\n", Area2);
    printf("PIB: %f reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}