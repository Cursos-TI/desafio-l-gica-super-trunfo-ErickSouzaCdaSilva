#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
char estado1[20]="A",estado2[20]="A";
    char codigo_de_cartas1[50]="01",codigo_de_cartas2[50]="02";
    char nome_da_cidade1[50]="Salvador",nome_da_cidade2[50]="Camaçari";
    unsigned int população1=3623647,população2= 304302;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1=18,pontos_turisticos2=15;
    float densidadepulacional1,densidadepulacional2;
    float pibpercapita1,pibpercapita2;
    float superpoder1,superpoder2;
    //menu do programa
    int opção;
    int sair;
    
    printf("menu principal\n");
    printf("pressione 1 para começar\n");
    printf("pressione 2 para regras\n");
    printf("pressione 3 para sair\n");
    printf("escolha uma opção:");
    scanf("%d",&opção);

    switch (opção){
    case 1:
        printf("execução do jogo\n");
        break;
    case 2:
        printf("As regras são...\n");
        break;
    case 3:
        printf("você dejesa sair do jogo?\n");
        printf("pressione 1 para sim\n");
        printf("pressione 2 para não\n");
        scanf("%d",&sair);
        switch (sair)
        {
        case 1:
         printf("você saiu");
         break;
        case 2:
         printf("você cancelou\n");
         break;
        default:
         printf("opção invalida\n");
         break;
    }
    default: 
    printf("opção invalida\n");
    break;
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
    //informação da carta  
    //primeira carta

    printf("coloque o estado da primeira cartas: \n");
    scanf("%s",estado1);

    printf("coloque o codigo da carta: \n");
    scanf("%s",codigo_de_cartas1);

    printf("coloque o nome da cidade: \n");
    scanf("%s",nome_da_cidade1);

    printf("qual é a população: \n");
    scanf("%u",&população1);

    printf("qual é a area: \n");
    scanf("%f",&area1);

    printf("digite o PIB: \n");
    scanf("%f",&pib1);

    printf("digite a quntidade de pontos turisticos: \n");
    scanf("%d",&pontos_turisticos1);
   
    //segunda carta
    
    printf("\ncoloque o estado da segunda cartas: \n");
    scanf("%s",estado2);

    printf("coloque o codigo da carta: \n");
    scanf("%s",codigo_de_cartas2);

    printf("coloque o nome da cidade: \n");
    scanf("%s",nome_da_cidade2);

    printf("qual é a população: \n");
    scanf("%u",&população2);

    printf("qual é a area: \n");
    scanf("%f",&area2);

    printf("digite o PIB: \n");
    scanf("%f",&pib2);

    printf("digite a quntidade de pontos turisticos: \n");
    scanf("%d",&pontos_turisticos2);
//calculo para saber se a densidade,o PIB per capita e o super poder
   
    //primeira carta

    densidadepulacional1=(float)população1/area1;
    pibpercapita1=(float)população1/pib1;
    superpoder1=(float)população1+area1+pib1+pontos_turisticos1+(-densidadepulacional1)+pibpercapita1;

    //segunda carta

    densidadepulacional2=(float)população2/area2;
    pibpercapita2=(float)população2/pib2;
    superpoder2=(float)população2+area2+pib2+pontos_turisticos2+(-densidadepulacional2)+pibpercapita2;
    //todas as informações
    
    //primeira carta

    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo_de_cartas1);
    printf("Nome da cidade: %s\n",nome_da_cidade1);
    printf("População: %u\n",população1);
    printf("Área: %.3fKM²\n",area1);
    printf("PIB: %.3fbilhões de reais\n",pib1);
    printf("Pontos turisticos: %d\n",pontos_turisticos1);
    printf("Densidade Populacional:%.3f hab/KM²\n",densidadepulacional1);
    printf("PIB per capita:%.3freais\n",pibpercapita1);
    printf("o nivel de super poder:%f\n",superpoder1);
    
    //segunda carta
    
    printf("\nEstado: %s\n",estado2);
    printf("Codigo: %s\n",codigo_de_cartas2);
    printf("Nome da cidade: %s\n",nome_da_cidade2);
    printf("População: %u\n",população2);
    printf("Área: %.3fKM²\n",area2);
    printf("PIB: %.3fbilhões de reais\n",pib2);
    printf("Pontos turisticos: %d\n",pontos_turisticos2);
    printf("Densidade Populacional:%.3f hab/KM²\n",densidadepulacional2);
    printf("PIB per capita:%.3freais\n",pibpercapita2);
    printf("o nivel de super poder:%f\n",superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
//compararação de status
    //compararação de status
    printf("Click em qualquer tecla depois em pressione enter para comtinuar\n");
    scanf("%d",&comfirção);
    printf("\n           Hora da comparação          \n");
    
    int atributo1,atributo2,atributo3,atributo4,atributo5,atributo6,atributo7;
    int resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7;

    printf("\n Comparação das estatisticas\n");
    printf("%s%s %s VS %s%s %s\n",estado1,codigo_de_cartas1,nome_da_cidade1,estado2,codigo_de_cartas2,nome_da_cidade2);
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf(" %d",&atributo1);
    
    switch (atributo1)
    {
    case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado1 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado1 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado1 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado1 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,densidadepulacional2);

    resultado1 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,pibpercapita2);

    resultado1 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,superpoder2);
    
    resultado1 = superpoder1>superpoder2 ? 1 : 0;
    
    default:
    printf("opção invalida");
    break;
    }
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo2);
    if(atributo1 != atributo2){
      switch (atributo2)
      {
    case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado2 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado2 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado2 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado2 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,densidadepulacional2);

    resultado2 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,pibpercapita2);

    resultado2 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,superpoder2);
    
    resultado2 = superpoder1>superpoder2 ? 1 : 0;
    
    default:
    printf("opção invalida");
    break;
    }}
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo3);
    if(atributo1 != atributo3 && atributo2 !=atributo3){
    switch (atributo3)
    {
    case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado3 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado3 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado3 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado3 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,densidadepulacional2);

    resultado3 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,pibpercapita2);

    resultado3 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,superpoder2);
    
    resultado3 = superpoder1>superpoder2 ? 1 : 0;
    
    default:
    printf("opção invalida");
    break;
  }}
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo4);
    if (atributo1 != atributo4 && atributo2 != atributo4 && atributo3 != atributo4)
    {
    switch (atributo4)
    {
      case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado4 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado4 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado4 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado4 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,densidadepulacional2);

    resultado4 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,pibpercapita2);

    resultado4 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%f\n",nome_da_cidade2,superpoder2);
    
    resultado4 = superpoder1>superpoder2 ? 1 : 0;
  }}
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo5);
    if (atributo1 != atributo5 && atributo2 != atributo5 && atributo3 != atributo5 && atributo4 != atributo5)
    {
    switch (atributo5)
    {
      case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado5 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado5 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado5 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado5 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,densidadepulacional2);

    resultado5 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pibpercapita2);

    resultado5 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,superpoder2);
    
    resultado5 = superpoder1>superpoder2 ? 1 : 0;

    default:
    printf("opção invalida");
    break;
    }}
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo6);
    if(atributo1 != atributo6 && atributo2 !=  atributo6 && atributo3 != atributo6 && atributo4 != atributo6 && atributo5 != atributo6)
    {
    switch (atributo6)
    {
      case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado6 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado6 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado6 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado6 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,densidadepulacional2);

    resultado6 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pibpercapita2);

    resultado6 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,superpoder2);
    
    resultado6 = superpoder1>superpoder2 ? 1 : 0;
    default:
    printf("opção invalida");
    break;
  }}
    printf("1.comparação da população\n");
    printf("2.comparação da área\n");
    printf("3.comparação da PIB\n");
    printf("4.comparação da pontos turistico\n");
    printf("5.comparação da densidade populacional\n");
    printf("6.comparação da PIB per capita\n");
    printf("7.comparação da super poder\n");
    printf("escolha uma opção e pressione enter para fazer a comparação \n");
    scanf("%d",&atributo7);
    if (atributo1 != atributo5 && atributo2 != atributo5 && atributo3 != atributo5 && atributo4 != atributo5)
    {
    switch (atributo7)
    {
      case 1:
      printf("\ncomparação da população\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,população1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,população2);
    resultado7 = população1 > população2 ? 1 : 0;  
    
    break;
    case 2:
    printf("\ncomparação da area\n"); 
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,area1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,area2);
    
    resultado7 = area1 > area2 ? 1 : 0;

    break;
    case 3:
    printf("\ncomparação da PIB\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pib1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pib2);
    
    resultado7 = pib1>pib2 ? 1 :0;
      
    break;
    case 4:
    printf("\ncomparação da pontos turistico\n");
    
    printf("1ºcarta-%s=%d\n",nome_da_cidade1,pontos_turisticos1);  
    printf("2ºcarta-%s=%d\n",nome_da_cidade2,pontos_turisticos2);
    
    resultado7 = pontos_turisticos1>pontos_turisticos2 ? 1 : 0;
    break;
    case 5:
    printf("\ncomparação da densidade populacional\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,densidadepulacional1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,densidadepulacional2);

    resultado7 = (-densidadepulacional1)<(-densidadepulacional2);
    break;
    case 6:
    printf("\ncomparação da PIB per capita\n");
    
    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,pibpercapita1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,pibpercapita2);

    resultado7 = pibpercapita1>pibpercapita2 ? 1 : 0;
    
    break;
    case 7:
    printf("\ncomparação da super poder\n");

    printf("1ºcarta-%s=%.3f\n",nome_da_cidade1,superpoder1);  
    printf("2ºcarta-%s=%.3f\n",nome_da_cidade2,superpoder2);
    
    resultado7 = superpoder1>superpoder2 ? 1 : 0;
    break;
    default:
    printf("opção invalida");
    break;
    }}
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

 printf("Click em qualquer tecla depois em pressione enter para comtinuar\n");
    scanf("%d",&comfirção);
    //possibilidade de vitorias e derrotas ou empate
    printf("%s%s %s VS %s%s %s\n",estado1,codigo_de_cartas1,nome_da_cidade1,estado2,codigo_de_cartas2,nome_da_cidade2);
    if(resultado1=1){
    printf("carta1 %s venceu a 1ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 1ºcomparação\n",nome_da_cidade2);
  }
    if(resultado2=1){
    printf("carta1 %s venceu a 2ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 2ºcomparação\n",nome_da_cidade2);
  }
    if(resultado3=1){
    printf("carta1 %s venceu a 3ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 3ºcomparação\n",nome_da_cidade2);
  }
    if(resultado4=1){
    printf("carta1 %s venceu a 4ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 4ºcomparação\n",nome_da_cidade2);
  }
    if(resultado5=1){
    printf("carta1 %s venceu a 5ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 5ºcomparação\n",nome_da_cidade2);
  }
    if(resultado6=1){
    printf("carta1 %s venceu a 6ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 6ºcomparação\n",nome_da_cidade2);
  }
    if(resultado7=1){
    printf("carta1 %s venceu a 7ºcomparação\n",nome_da_cidade1);
  }else{
    printf("carta2 %s venceu a 7ºcomparação\n",nome_da_cidade2);
  }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
