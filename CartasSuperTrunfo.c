#include <stdio.h>
int main(){

 // Declaração das variaveis
char  estado1[20];
char  CodigoCarta1[20];
char  NomeCidade1[20];
unsigned long int   Populacao1;
float Area_KM21;
float PIB1;
int   NumerosPontosTuristicos1;
float DensidadePopulacional1;
float PIBPerCapita1; 
unsigned long int SomaSuperPoder1;
float InvDensidadePopulacional1;



char  estado2[20];
char  CodigoCarta2[20];
char  NomeCidade2[20];
unsigned long int   Populacao2;
float Area_KM22;
float PIB2;
int   NumerosPontosTuristicos2;
float DensidadePopulacional2;
float PIBPerCapita2;
unsigned long int SomaSuperPoder2;
float InvDensidadePopulacional2;

// Variaveis resultado das comparações
unsigned long int populacao;
float area;
float PIB;
int PontosTuristicos;
float DensidadePopulacional;
float PibPerCapta;
float Superpoder; 


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

InvDensidadePopulacional1 = 1 / DensidadePopulacional1;
InvDensidadePopulacional2 = 1 / DensidadePopulacional2;
printf ("Inverso da densidade Populacional 1 é : %f \n",InvDensidadePopulacional1);
printf ("Inverso da densidade Populacional 2 é : %f \n",InvDensidadePopulacional2);


PIBPerCapita1 = (float) (PIB1 / Populacao1) *1000000000;
PIBPerCapita2 = (float) (PIB2 / Populacao2) *1000000000;


//Soma Super Poder 

 SomaSuperPoder1 = (unsigned long int)(Populacao1 + Area_KM21 + PIB1 + NumerosPontosTuristicos1 + PIBPerCapita1  + InvDensidadePopulacional1);
 SomaSuperPoder2 = (unsigned long int) (Populacao2 + Area_KM22 + PIB2 + NumerosPontosTuristicos2 + PIBPerCapita2  + InvDensidadePopulacional2); 


// Comparação das Cartas

populacao = Populacao1 > Populacao2;
area = Area_KM21 > Area_KM22;
PIB = PIB1 > PIB2;
PontosTuristicos = NumerosPontosTuristicos1 > NumerosPontosTuristicos2;
DensidadePopulacional = DensidadePopulacional1 < DensidadePopulacional2;
PibPerCapta = PIBPerCapita1 > PIBPerCapita2;
Superpoder = SomaSuperPoder1 > SomaSuperPoder2;

 
printf("População Venceu:%.2u\n",populacao);
printf("Área Venceu : %.2f\n",area);
printf("PIB venceu: %.2f\n",PIB);
printf("Pontos Turisticos Venceu: %.2d\n",PontosTuristicos);
printf("Densidade Populacional venceu: %.2f\n",DensidadePopulacional);
printf("PIB per Capita venceu: %.2f \n",PibPerCapta);
printf("Super Poder Venceu: %.2f \n",Superpoder);


return 0;

}

