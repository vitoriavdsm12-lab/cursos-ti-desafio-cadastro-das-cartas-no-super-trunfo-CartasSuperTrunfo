#include <stdio.h>


#include <string.h>

// Definição da estrutura
struct carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para imprimir a carta
void imprimircarta(struct carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("----------------------------------------\n");
}

int main() {
    struct carta carta1, carta2;

    // Dados da carta 1: São Paulo
    carta1.estado = 'A';
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12325000;
    carta1.area = 1521.11;
    carta1.pib = 699.28;
    carta1.pontosTuristicos = 50;

    // Dados da carta 2: Rio de Janeiro
    carta2.estado = 'B';
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1200.25;
    carta2.pib = 300.50;
    carta2.pontosTuristicos = 30;

    // Impressão
    printf("Carta 1:\n");
    imprimircarta(carta1);

    printf("Carta 2:\n");
    imprimircarta(carta2);

    return 0;
}






