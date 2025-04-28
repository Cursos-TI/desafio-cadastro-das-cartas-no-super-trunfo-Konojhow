#include <stdio.h>

// Definição da estrutura para representar uma carta (cidade)
struct Carta {
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidade;
    float pibper;

};

int main() {

    printf("# Desafio Super Trunfo! # \n");
    // Declaração de duas variáveis do tipo Carta para armazenar os dados das cidades
    struct Carta cidade1;
    struct Carta cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Primeira Cidade:\n");
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em milhões de R$): ");
    scanf("%f", &cidade1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade1.numPontosTuristicos);
    //Inclusão da Densidade e Per Capita Cidade1;
    printf("Densidade Populacional: (Hab./Km²) ");
    scanf("%f", &cidade1.densidade);
    printf("PIB per Capita: ");
    scanf("%f", &cidade1.pibper);



    printf("\n");
    
    


    // Cadastro da segunda cidade
    printf("Cadastro da Segunda Cidade:\n");
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em milhões de R$): ");
    scanf("%f", &cidade2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade2.numPontosTuristicos);
    //Inclusão da Densidade e Per Capita Cidade2;
    printf("Densidade Populacional (Hab./Km²): ");
    scanf("%f", &cidade2.densidade);
    printf("PIB per Capita: ");
    scanf("%f", &cidade2.pibper);
    printf("\n");
    
    

    // Exibição dos dados da primeira cidade
    printf("Dados da Primeira Cidade:\n");
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f milhões de R$\n", cidade1.pib);
    printf("Número de pontos turísticos: %d\n", cidade1.numPontosTuristicos);
    // Inclusão da Densidade e PIB Per Capita Cidade 1
    printf("Desnsidade Populacional : %.2f (Hab/km²)\n", cidade1.densidade);
    printf("PIB per Capita: %.2f\n", cidade1.pibper);




    printf("\n");

    // Exibição dos dados da segunda cidade
    printf("Dados da Segunda Cidade:\n");
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f milhões de R$\n", cidade2.pib);
    printf("Número de pontos turísticos: %d\n", cidade2.numPontosTuristicos);
    // Inclusão da Densidade e PIB Per Capita Cidade 1
    printf("Desnsidade Populacional : %.2f (Hab/km²)\n", cidade2.densidade);
    printf("PIB per Capita: %.2f\n", cidade2.pibper); 



    printf("\n"); 

    return 0;
}