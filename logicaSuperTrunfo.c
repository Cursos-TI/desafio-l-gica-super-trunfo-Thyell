#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
char carta1[10] = "Carta 1";
char carta2[10] = "Carta 2";
char estado1[20] = "SP";
char codigo1[4] = {'A','0','1'};
char codigo2[4] = {'A','0','2'};
char cidade1[20] = "Barueri";
char cidade2[20] = "Itapevi";
unsigned long int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosTuristico1, pontosTuristico2;
float pibPerCapita1, pibPerCapita2;
float densidadePopulacional1, densidadePopulacional2;

populacao1 = 316473.;
populacao2 = 232297.;
area1 = 65.701;
area2 = 82.658;
pib1 = 57088.30;
pib2 = 52656.00;
pontosTuristico1 = 15;
pontosTuristico2 = 14;
pibPerCapita1 = (float)57088.30 / 316.473;                   //Pib / População
pibPerCapita2 = (float)52656.00 / 232.297;
densidadePopulacional1 = (float)316.473 / 65.701;            //Populaçao / Área
densidadePopulacional2 = (float)232.297 / 82.658;

printf("%s - %s (%s)\n", carta1, cidade1, estado1);
printf("Código da carta: %s-%s\n", estado1, codigo1);
printf("População: %u\n", populacao1);
printf("Área: %.3f\n", area1);
printf("PIB: %.3f\n", pib1);
printf("Pontos Turisticos: %d\n", pontosTuristico1);
printf("PIB Per Capita: %.3f\n", pibPerCapita1);
printf("Densidade Populacional: %.3f\n\n", densidadePopulacional1);

printf("%s - %s (%s)\n", carta2, cidade2, estado1);
printf("Código da carta: %s-%s\n", estado1, codigo2);
printf("População: %u\n", populacao2);
printf("Área: %.3f\n", area2);
printf("PIB: %.3f\n", pib2);
printf("Pontos Turisticos: %d\n", pontosTuristico2);
printf("PIB Per Capita: %.3f\n", pibPerCapita2);
printf("Densidade Populacional: %.3f\n\n", densidadePopulacional2);

printf("Comparação de cartas (Atributo: População):\n\n");

if (populacao1 > populacao2){
    printf("%s - %s: (%s): %u hab\n", carta1, cidade1, estado1, populacao1);
    printf("%s - %s: (%s): %u hab\n", carta2, cidade2, estado1, populacao2);
    printf("%s - %s (Venceu)!\n", carta1, cidade1);
}
else{
    printf("%s - %s (Venceu)!\n", carta2, cidade2);
}
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
