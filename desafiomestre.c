#include <stdio.h>

// Definição correta da estrutura
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;  // O nome do tipo deve estar aqui

int main() {
    Carta carta1, carta2;  // Agora o tipo é reconhecido corretamente

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf("%s", carta1.estado);
    printf("Código: "); scanf("%s", carta1.codigo);
    printf("Nome: "); scanf("%s", carta1.nome);
    printf("População: "); scanf("%lu", &carta1.populacao);
    printf("Área: "); scanf("%f", &carta1.area);
    printf("PIB: "); scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: "); scanf("%d", &carta1.pontos_turisticos);

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf("%s", carta2.estado);
    printf("Código: "); scanf("%s", carta2.codigo);
    printf("Nome: "); scanf("%s", carta2.nome);
    printf("População: "); scanf("%lu", &carta2.populacao);
    printf("Área: "); scanf("%f", &carta2.area);
    printf("PIB: "); scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: "); scanf("%d", &carta2.pontos_turisticos);

    // Cálculos da Carta 1
    carta1.densidade_populacional = carta1.area > 0 ? carta1.populacao / carta1.area : 0;
    carta1.pib_per_capita = carta1.populacao > 0 ? carta1.pib / carta1.populacao : 0;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos +
                         carta1.pib_per_capita + (carta1.densidade_populacional > 0 ? (1.0 / carta1.densidade_populacional) : 0);

    // Cálculos da Carta 2
    carta2.densidade_populacional = carta2.area > 0 ? carta2.populacao / carta2.area : 0;
    carta2.pib_per_capita = carta2.populacao > 0 ? carta2.pib / carta2.populacao : 0;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos +
                         carta2.pib_per_capita + (carta2.densidade_populacional > 0 ? (1.0 / carta2.densidade_populacional) : 0);

    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");
    
    printf("População: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (carta1.area > carta2.area) ? 1 : 2, (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2, (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2, (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2, (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1.super_poder > carta2.super_poder) ? 1 : 2, (carta1.super_poder > carta2.super_poder) ? 1 : 0);

    return 0;
}
