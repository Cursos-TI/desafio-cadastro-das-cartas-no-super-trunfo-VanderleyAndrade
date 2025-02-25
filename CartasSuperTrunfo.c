#include <stdio.h>
int main(){

 // Declaração das variaveis
char  estado1[20];
char  CodigoCarta1[20];
char  NomeCidade1[20];
int   Populacao1;
float Area_KM21;
float PIB1;
int   NumerosPontosTuristicos1;
float DensidadePopulacional1;
float PIBPerCapita1;
     
char  estado2[20];
char  CodigoCarta2[20];
char  NomeCidade2[20];
int   Populacao2;
float Area_KM22;
float PIB2;
int   NumerosPontosTuristicos2;
float DensidadePopulacional2;
float PIBPerCapita2;


// Informações para cadastro da carta 1
       
        printf("Digite o Estado da carta 1:"); 
        scanf ("%s",&estado1);

        printf("Digite o Código da carta 1:");
        scanf ("%s", &CodigoCarta1);

        printf("Digite o nome da Cidade da Carta 1:");
        scanf (" %s", &NomeCidade1);

        printf("Digite a População da carta 1:");
        scanf ("%d",&Populacao1);

        printf("Digite a Área em KM2 da Carta 1:");
        scanf ("%f",&Area_KM21);

        printf("Digite o PIB da carta 1:");
        scanf ("%f",&PIB1);

        printf("Digite o numero de pontos turísticos da carta 1:");
        scanf ("%d",&NumerosPontosTuristicos1);
// Informações para cadastro da carta 2

printf("Digite o Estado da carta 2:"); 
scanf ("%s",&estado2);

printf("Digite o Código da carta 2:");
scanf ("%s", &CodigoCarta2);

printf("Digite o nome da Cidade da Carta 2:");
scanf ("%s", &NomeCidade2);

printf("Digite a População da carta 2:");
scanf ("%d",&Populacao2);

printf("Digite a Área em KM2 da Carta 2:");
scanf ("%f",&Area_KM22);

printf("Digite o PIB da carta 2:");
scanf ("%f",&PIB2);

printf("Digite o numero de pontos turísticos da carta 2:");
scanf ("%d",&NumerosPontosTuristicos2);

DensidadePopulacional1 =(float) Populacao1 / Area_KM21;
DensidadePopulacional2 =(float) Populacao2 / Area_KM22;

//Colocado *1000000000 para movimentar a virgula no resultado
PIBPerCapita1 = (float) (PIB1 / Populacao1) *1000000000;
PIBPerCapita2 = (float) (PIB2 / Populacao2) *1000000000;



// Exibe  o resultado da carta 1
printf("Carta 1:\n");
printf("Estado: %s\n",estado1);
printf("Código: %s\n",CodigoCarta1);
printf("Nome da Cidade: %s\n",NomeCidade1);
printf("População: %d\n",Populacao1);
printf("Área: %.2f km²\n",Area_KM21);
printf("PIB: %.2f bilhões\n",PIB1);
printf("Numero de Pontos Turisticos: %d\n",NumerosPontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional1);
printf("PIB per Capita: %f reais\n",PIBPerCapita1);



// Exibe  o resultado da carta 2
printf("Carta 2:\n");
printf("Estado: %s\n",estado2);
printf("Código: %s\n",CodigoCarta2);
printf("Nome da Cidade: %s\n",NomeCidade2);
printf("População: %d\n",Populacao2);
printf("Área: %.2f km²\n",Area_KM22);
printf("PIB: %.2f bilhões\n",PIB2);
printf("Numero de Pontos Turisticos: %d\n",NumerosPontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
printf("PIB per Capita: %f reais\n",PIBPerCapita2);

return 0;


}
