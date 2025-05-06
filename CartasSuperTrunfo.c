#include <stdio.h>

// Definição da estrutura para representar uma carta (cidade)
struct Carta {
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidade;
    float pibper;
    //Incluir Super Poder
    float superpoder;

   

};

int main() {

    printf("# Desafio Super Trunfo! # \n");
    // Declaração de duas variáveis do tipo Carta para armazenar os dados das cidades
    struct Carta cidade1;
    struct Carta cidade2;
    //Inclusão do Resultado;
    int resultadoPopulacao;
    float resultadoArea;
    float resultadoPIB;
    int resultadoPontosTuristicos;
    float resultadoDensidade;
    float resultadoPIBPerCapita;
    float resultadoSuperPoder;
    float superPoderCarta1;
    float superPoderCarta2;

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
    //Inclusão Super Poder;
    printf("Super Poder: ");
    scanf("%f", &cidade1.superpoder);



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
    // Inclusão Super poder;


    printf("\n");
    
        // Cálculo do Super Poder para a Carta 1
        superPoderCarta1 = cidade1.populacao + cidade1.area + cidade1.pib + cidade1.numPontosTuristicos + cidade1.pibper - cidade1.densidade;

    
        // Cálculo do Super Poder para a Carta 2
        superPoderCarta2 = cidade2.populacao + cidade2.area + cidade2.pib + cidade2.numPontosTuristicos + cidade2.pibper - cidade2.densidade;
    

    // Exibição dos dados da primeira cidade
    printf("Dados da Primeira Cidade:\n");
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f milhões de R$\n", cidade1.pib);
    printf("Número de pontos turísticos: %d\n", cidade1.numPontosTuristicos);
    // Inclusão da Densidade e PIB Per Capita Cidade 1
    printf("Desnsidade Populacional: %.2f (Hab/km²)\n", cidade1.densidade);
    printf("PIB per Capita: %.2f\n", cidade1.pibper);
    // Inclusão Super Poder Cidade 1
    printf("Super Poder: %.2f\n", superPoderCarta1);



    printf("\n");

    // Exibição dos dados da segunda cidade
    printf("Dados da Segunda Cidade:\n");
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f milhões de R$\n", cidade2.pib);
    printf("Número de pontos turísticos: %d\n", cidade2.numPontosTuristicos);
    // Inclusão da Densidade e PIB Per Capita Cidade 1
    printf("Desnsidade Populacional: %.2f (Hab/km²)\n", cidade2.densidade);
    printf("PIB per Capita: %.2f\n", cidade2.pibper);
    // Inclusão Super Poder Cidade 2
    printf("Super Poder: %.2f\n", superPoderCarta2);


      // Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    // Comparação da População
    if (cidade1.populacao > cidade2.populacao){
        printf("Cidade 1 Vence!\n");
          } else {
            printf("Cidade 2 Venceu!\n");
          }

    // Comparação da Área
    if (cidade1.area > cidade2.area){
        printf("Cidade1 Venceu!\n");
    } else {
        printf("Cidade 2 Venceu!\n");
        /* code */
    }
           // Comparação do PIB
       if (cidade1.pib > cidade2.pib){
        printf("Cidade 1 Venceu!\n");
    } else{
        printf("Cidade 2 Venceu!\n");
    }        
    // Comparação do Número de Pontos Turísticos
    if (cidade1.numPontosTuristicos > cidade2.numPontosTuristicos){
        printf("Cidade 1 Vence!\n");
          } else {
            printf("Cidade 2 Venceu!\n");
          }
        // Comparação da Densidade Populacional (menor valor vence)
    if (cidade1.densidade < cidade2.densidade){
        printf("Cidade 1 Vence!\n");
          } else {
            printf("Cidade 2 Venceu!\n");
          }
       // Comparação do PIB per Capita
    if (cidade1.pibper > cidade2.pibper){
        printf("Cidade 1 Vence!\n");
          } else {
            printf("Cidade 2 Venceu!\n");
          }
       // Comparação do Super Poder
    if (cidade1.superpoder > cidade2.superpoder){
        printf("Cidade 1 Vence!\n");
          } else {
            printf("Cidade 2 Venceu!\n");
          }
       printf("\n");



    return 0;
}