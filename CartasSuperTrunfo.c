#include <stdio.h>
int main(){

 // Declaração das variaveis

char  pais1[20];
char  estado1[20];
char  CodigoCarta1[20];
char  NomeCidade1[20];
int   Populacao1;
float Area_KM21;
float PIB1;
int   NumerosPontosTuristicos1;
float DensidadePopulacional1;
float PIBPerCapita1; 
unsigned long int SomaSuperPoder1;
float InvDensidadePopulacional1;


char  pais2[20];
char  estado2[20];
char  CodigoCarta2[20];
char  NomeCidade2[20];
int   Populacao2;
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
int EscolhaComparacao;
char primeirostributo,segundoatributo;
int resultado1;
int resultado2;

// Informações para cadastro da carta 1
       
printf("Digite o País da carta 1:"); 
scanf ("%s",&pais1);

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


printf("Digite o País da carta 2:");
scanf ("%s",&pais2);

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


PIBPerCapita1 = (float) (PIB1 / Populacao1) *1000000000;
PIBPerCapita2 = (float) (PIB2 / Populacao2) *1000000000;


//Soma Super Poder 

 SomaSuperPoder1 = (unsigned long int)(Populacao1 + Area_KM21 + PIB1 + NumerosPontosTuristicos1 + PIBPerCapita1  + InvDensidadePopulacional1);
 SomaSuperPoder2 = (unsigned long int) (Populacao2 + Area_KM22 + PIB2 + NumerosPontosTuristicos2 + PIBPerCapita2  + InvDensidadePopulacional2); 


//Inicio do Jogo 
printf("Bem vindo ao jogo! \n");
printf("Escolha o primeiro Atributo.\n");
printf("A.População \n");
printf("B.Área KM² \n");
printf("C.PIB \n");
printf("D.Numeros pontos Túristicos \n");
printf("E.Densidade Populacional \n");
printf("F.PIB Percapita \n");
printf("G.Superpoder \n");
printf("Escolha a comparação do primeiro atributo \n");
scanf(" %c", &primeirostributo);

printf("Escolha o segundo atributo. \n");
printf("Atenção: Você deve escolher atributo diferente do primeiro.\n");
printf("A.População \n");
printf("B.Área KM² \n");
printf("C.PIB \n");
printf("D.Numeros pontos Túristicos \n");
printf("E.Densidade Populacional \n");
printf("F.PIB Percapita \n");
printf("G.Superpoder \n");
printf(" Escolha a comparação do segundo  atributo \n");
scanf(" %c", &segundoatributo);



// Verificação de qual foi o primeiro atributo escolhido

switch (primeirostributo)
{
case 'A':
case 'a':
    printf("Você escolheu a População\n");
    resultado1 = Populacao1 > Populacao2 ? 1 : 0;
    break;
case 'B':
case 'b':
    printf("Você escolheu a área\n");
    resultado1 = Area_KM21 > Area_KM22 ? 1 : 0;
    break;
case 'C':
case 'c':
    printf("Você escolheu a opção PIB\n");
    resultado1 = PIB1 > PIB2 ? 1: 0;
    break;
case 'D':
case 'd':
    printf("Você escolheu a opção numero de pontos túristicos\n");
    resultado1 = NumerosPontosTuristicos1 > NumerosPontosTuristicos2 ? 1: 0;
    break;                  
case 'E':
case 'e':                                                                
    printf("Você escolheu a opção Densidade Populacional\n");
    resultado1 = InvDensidadePopulacional1 < InvDensidadePopulacional2 ? 1: 0;
    break;
case 'F':
case 'f':                                                                       
    printf("Você escolheu a opção PIB Percapita\n");
    resultado1 = PIBPerCapita1 > PIBPerCapita2 ? 1: 0;
    break;
case 'G':
case 'g':                                                                               
    printf("Você escolheu a opção de Superpoder\n");
    resultado1 = SomaSuperPoder1 > SomaSuperPoder2 ? 1: 0;
    break;  
default :
      printf("Opção invalida\n");
      break;
}        
if (primeirostributo == segundoatributo)
{
printf ("Você escolheu o mesmo atributo!\n");
}else {

        // Verificação de qual foi o segundo atributo escolhido
        
switch (segundoatributo)
{  
case 'A':
case 'a':                            
    printf("Você escolheu a População\n");
    resultado2 = Populacao1 > Populacao2 ? 1: 0;
    break;
case 'B':
case 'b':                                   
    printf("Você escolheu a área\n");
    resultado2 = Area_KM21 > Area_KM22 ? 1: 0;
    break;
case 'C':
case 'c':
    break;                                            
    printf("Você escolheu a opção PIB\n");
    resultado2 = PIB1 > PIB2 ? 1: 0;
    break;
case 'D':
case 'd':   
    printf("Você escolheu a opção numero de pontos túristicos\n");
    resultado2 = NumerosPontosTuristicos1 > NumerosPontosTuristicos2 ? 1: 0;
    break;           
case 'E':
case 'e':                                                            
    printf("Você escolheu a opção Densidade Populacional\n");
    resultado2 = InvDensidadePopulacional1 < InvDensidadePopulacional2 ? 1: 0;
    break;
case 'F':
case 'f':                                                                   
    printf("Você escolheu a opção PIB Percapita\n");
    resultado2 = PIBPerCapita1 > PIBPerCapita2 ? 1: 0;
    break;
case 'G':
case 'g':                                                                           
    printf("Você escolheu a opção de Superpoder\n");
    resultado2 = SomaSuperPoder1 > SomaSuperPoder2 ? 1: 0;
break;       

default:
    printf("Opção Invalida\n");
break;
}

 //Comparando os resultados

if (resultado1 && resultado2)
{
    printf ("Parabens você venceu!\n");
}else if( resultado1 != resultado2){
    printf("Empatou!\n");
}else {
    printf(" Infelizmente você perdeu!\n");
}
}
return 0;

}