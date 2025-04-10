#include <stdio.h>


int main() {

    char estado, código_carta[5], nome_cidade[30];
    int população, pontos_turísticos;
    float área, PIB;

    printf("Bem-vindo ao Jogo Super Trunfo!\n");
    printf("Vamos começar inserindo os valores de duas cartas.\n");

    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados) e aperte ENTER:\n");
    scanf("%c", &estado);

    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) e aperte ENTER:\n");
    scanf("%s", código_carta);

    printf("Insira o nome da cidade e aperte ENTER:\n");
    scanf(" %29[^\n]", nome_cidade); 

    printf("Insira o número de habitantes da cidade e aperte ENTER:\n");
    scanf("%d", &população);

    printf("Informe a área da cidade em quilômetros quadrados e aperte ENTER:\n");
    scanf("%f", &área);

    printf("Digite o Produto Interno Bruto da cidade e aperte ENTER:\n");
    scanf("%f", &PIB);

    printf("Insira a quantidade de pontos turísticos na cidade e aperte ENTER:\n");
    scanf("%d", &pontos_turísticos);

    char estado_1, código_carta_1[5], nome_cidade_1[30];
    int população_1, pontos_turísticos_1;
    float área_1, PIB_1;

    printf("Agora vamos adicionar as informações da segunda carta!\n");

    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados) e aperte ENTER:\n");
    scanf(" %c", &estado_1);

    printf("Insira a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) e aperte ENTER:\n");
    scanf("%s", código_carta_1);

    printf("Insira o nome da cidade e aperte ENTER:\n");
    scanf(" %29[^\n]", nome_cidade_1);

    printf("Insira o número de habitantes da cidade e aperte ENTER:\n");
    scanf("%d", &população_1);

    printf("Informe a área da cidade em quilômetros quadrados e aperte ENTER:\n");
    scanf("%f", &área_1);

    printf("Digite o Produto Interno Bruto da cidade e aperte ENTER:\n");
    scanf("%f", &PIB_1);

    printf("Insira a quantidade de pontos turísticos na cidade e aperte ENTER:\n");
    scanf("%d", &pontos_turísticos_1);

    printf("Os resultados foram:\n");
    printf("CARTA 1:\n");
    printf("ESTADO: %c\n", estado);
    printf("CÓDIGO DA CARTA: %s\n", código_carta);
    printf("NOME DA CIDADE: %s\n", nome_cidade);
    printf("POPULAÇÃO DA CIDADE: %d\n", população);
    printf("ÁREA (EM KM²): %.2f\n", área);
    printf("PIB: %.2f REAIS.\n", PIB);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos_turísticos);

    printf("\n");

    printf("Carta 2:\n");
    printf("ESTADO: %c\n", estado_1);
    printf("CÓDIGO DA CARTA: %s\n", código_carta_1);
    printf("NOME DA CIDADE: %s\n", nome_cidade_1);
    printf("POPULAÇÃO DA CIDADE: %d\n", população_1);
    printf("ÁREA (EM KM²): %.2f\n", área_1);
    printf("PIB: %.2f REAIS.\n", PIB_1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos_turísticos_1);

    return 0;
}
