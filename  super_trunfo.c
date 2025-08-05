#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    // Variáveis para a segunda carta
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;
    
    // Cálculos para ambas as cartas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição dos dados das cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos1);
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos2);
    
    // Escolha do atributo para comparação (definido no código)
    // Opções: "populacao", "area", "pib", "densidade", "pib_per_capita", "pontos_turisticos"
    char atributo_comparacao[] = "populacao";
    
    printf("Comparação de cartas (Atributo: %s):\n", atributo_comparacao);
    printf("------------------------------------\n");
    
    // Lógica de comparação
    if (strcmp(atributo_comparacao, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "pib") == 0) {
        printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);
        
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "densidade") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
        
        // Para densidade, o menor valor vence
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "pib_per_capita") == 0) {
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pib_per_capita2);
        
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(atributo_comparacao, "pontos_turisticos") == 0) {
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontos_turisticos2);
        
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else {
        printf("Atributo de comparação inválido!\n");
    }
    
    return 0;
}