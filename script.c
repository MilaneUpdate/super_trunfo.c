#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main() {

    // = DADOS DA CARTA 1 =
    
    // Declaração das variáveis que representam os atributos da primeira carta
    char carta1[10];                        // Nome ou identificação da carta (ainda não atribuído)
    char estado1 = 'A';                     // Letra que representa o estado (exemplo: 'A' para Alagoas)
    char codigo1[5] = "A01";                // Código identificador da cidade
    char cidade1[20] = "Maceió";            // Nome da cidade
    int populacao1 = 1387920;               // População da cidade
    float area1 = 510.655;                  // Área da cidade em km²
    float pib1 = 27.5;                      // Produto Interno Bruto (PIB) em bilhões de reais
    int nPontosTuristicos1 = 23;            // Número de pontos turísticos na cidade

    // Impressão dos dados da carta 1
    printf("Carta 1: %s\n", carta1);  // Irá só repetir o nome (carta 1)(vai imprimir vazio)
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos1);
    printf("\n");  // Linha em branco para separar visualmente as cartas

    // = DADOS DA CARTA 2 =
    
    // Declaração das variáveis para a segunda carta
    char carta2[10];                        // Nome ou identificação da carta (ainda não atribuído)
    char estado2 = 'C';                     // Letra que representa o estado (exemplo: 'C' para Ceará)
    char codigo2[5] = "A02";                // Código identificador da cidade
    char cidade2[20] = "Fortaleza";         // Nome da cidade
    int populacao2 = 4284450;               // População da cidade
    float area2 = 312.353;                  // Área da cidade em km²
    float pib2 = 65.16;                     // PIB em bilhões de reais
    int nPontosTuristicos2 = 23;            // Número de pontos turísticos

    // Impressão dos dados da carta 2
    printf("Carta 2: %s\n", carta2);       
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);      
    printf("PIB: %.2f bilhões de reais\n", pib2); 
    printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos2);

    printf("\n");  // Linha em branco final

    // Mensagem final
    printf("Fim do programa!\n");

    return 0;  // Retorno da função main indicando que o programa terminou com sucesso