#include <stdio.h>
#include <stdlib.h>

int main(){

//informações das cartas:

char estado1[3] = "A";
char estado2[3] = "B";
char codigo1[4] = {'0','1'};
char codigo2[4] = {'0','2'};
char carta1[20] = "Carta 1";
char carta2[20] = "Carta 2";
char cidade1[20] = "Barueri";
char cidade2[20] = "Itapevi";

//Valor das cartas:

unsigned long int populacao1 = 316473, populacao2 = 232297;
float area1 = 65701, area2 = 82658;
float pib1 = 570883, pib2 = 526560;
int pontosTuristicos1 = 15, pontosTuristicos2 = 15;
float pibPerCapita1 = (float)570883 / 316473, pibPerCapita2 = (float)526560 / 232297; //Pib / População
float densidadePopulacional1 = (float)316473 / 65701, densidadePopulacional2 = (float)232297 / 82658; //Populaçao / Área
float superPoder1, superPoder2;
int valor1, valor2;


valor1 = populacao1, area1, pontosTuristicos1, pibPerCapita1, densidadePopulacional1;
valor2 = populacao2, area2, pontosTuristicos2, pibPerCapita2, densidadePopulacional2;

superPoder1 = valor1;
superPoder2 = valor2;

//Ler as cartas

printf("%s\n\n", carta1);
printf("Estado: %s\n", estado1);
printf("Código da Carta: %s%c%c\n", estado1, codigo1[0], codigo1[1]);
printf("Cidade: %s\n", cidade1);
printf("População: %.3lu mil hab\n", populacao1);
printf("Área: %.0f km²\n", area1);
printf("PIB: R$ %.0f Bilhões de Reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.0f hab/km²\n",densidadePopulacional1);
printf("Pib per Capita:R$ %.3f mil Reais\n", pibPerCapita1);
printf("Super Poder: %.3f Bi\n\n", superPoder1);

printf("%s\n\n", carta2);
printf("Estado: %s\n", estado2);
printf("Código da Carta: %s%c%c\n", estado2, codigo1[0], codigo1[2]);
printf("Cidade: %s\n", cidade2);
printf("População: %.3lu mil hab\n", populacao2);
printf("Área: %.0f km²\n", area2);
printf("PIB: R$ %.0f Bilhões de Reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.0f hab/km²\n",densidadePopulacional2);
printf("Pib per Capita:R$ %.3f mil Reais\n", pibPerCapita2);
printf("Super Poder: %.3f Bi\n\n", superPoder2);

//Iniciar o jogo

printf("***Bem Vindo ao Jogo Super Trunfo***\n\n");

int atributo1, atributo2;
int resultado1, resultado2;

printf("Escolha o primeiro atributo:\n\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos:\n");
printf("5. Densidade populacional:\n\n");

printf("Escolha a comparação: ");
scanf("%d", &atributo1);


switch (atributo1)
{
case 1:
printf("Você escolheu a opção População!\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
break;

case 2:
printf("Você escolheu a opção Área!\n");
resultado1 = area1 > area2 ? 1 : 0;
break;

case 3:
printf("Você escolheu a opção PIB!\n");
resultado1 = pib1 > pib2 ? 1 : 0;
break;

case 4:
printf("Você escolheu a opção Pontos Turísticos!\n");
resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
break;

case 5:
printf("Você escolheu a opção Densidade populacional!\n");
resultado1 = densidadePopulacional1 > densidadePopulacional2 ? 1 : 0;
break;

default:
printf("Opção inválida!\n");
break;
}

printf("Escolha o segundo atributo:\n\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos:\n");
printf("5. Densidade populacional:\n\n");

printf("Escolha a comparação: ");
scanf("%d", &atributo2);

if (atributo1 == atributo2)
{
    printf("Você escolheu o memo atributo!\n");
}else{
    switch (atributo2)
    {
    case 1:
        printf("Você escolheu a opção População!\n");
resultado2 = populacao1 > populacao2 ? 1 : 0;
break;

case 2:
printf("Você escolheu a opção Área!\n");
resultado2 = area1 > area2 ? 1 : 0;
break;

case 3:
printf("Você escolheu a opção PIB!\n");
resultado2 = pib1 > pib2 ? 1 : 0;
break;

case 4:
printf("Você escolheu a opção Pontos Turísticos!\n");
resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
break;

case 5:
printf("Você escolheu a opção Densidade populacional!\n");
resultado2 = densidadePopulacional1 > densidadePopulacional2 ? 1 : 0;
break;
    
default:
        
break;
    }
           if (resultado1 && resultado2)
    {
        printf("Parabéns você venceu!\n");
    }else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    }else{
        printf("Você perdeu!\n");
    }
}


return 0;
}