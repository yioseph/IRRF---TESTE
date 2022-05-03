#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float sal;
    float sal1;
    char nome[40];
    char d, du;
    float dep, perda;
    float desc1;
    float desc2;
    float desc3;
    float desc4;
    int hor;
    float vhor50;
    int hor1;
    float vhor100;
    float grat;

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>ATEN��O<<<<<<<<<<<<<<<<<<<<<<<<<");
    printf("\n\nUSAR PONTO, AO INV�Z DE V�RGULA PARA SEPARAR CASAS DECIMAIS!");


    printf("\n\nQual seu nome?\n");
    fflush(stdin);
    fgets(nome, 40, stdin);


    printf("\n\nQual sua renda bruta?\nR$ ");
    fflush(stdin);
    scanf("%f", &sal);

    printf("\n\nQual seu sal�rio base?\nR$ ");
    fflush(stdin);
    scanf("%f", &sal1);

    printf("\n\nQuantas horas extras 50%% voc� fez? ");
    fflush(stdin);
    scanf("%i", &hor);

    vhor50 = hor * ((sal1/200)+((sal1/200)*0.5));
    printf("O valor das horas extras em moeda � R$ %.2f.", vhor50);

    printf("\n\nQuantas horas extras 100%% voc� fez?");
    fflush(stdin);
    scanf("%i", &hor1);

    vhor100 = hor1 * ((sal1/200)+((sal1/200)*1));
    printf("O valor das horas extras em moeda � R$ %.2f.", vhor100);

    printf("\n\nPossui Dependentes [s-Sim/n-N�o]?");
    fflush(stdin);
    scanf("%c", &d);


    if (d == 's'){
        printf("\nQual valor total referente aos dependentes?\nR$ ");
        fflush(stdin);
        scanf("%f", &dep);

        };

    printf("\n\nPossui gratifica��o? [S-Sim/N-N�o] ");
    fflush(stdin);
    scanf("%c", &du);

    if (du == 's') {
        printf("\n\nQual valor total da gratifica��o? ");
        fflush(stdin);
        scanf("%f", &grat);
        };


    if (sal<=1903.98) {
        printf("\n\nIsento desconto IRRF.\n\n");
    };

    if (1903.99<=sal && sal<=2826.65) {
        desc1 = (((sal-dep-(sal1*0.11))*0.075)-142.80);
        perda = (desc1/(grat + vhor50 + vhor100));
        printf("\n\nO valor do desconto � R$ %.3f, referente a aliquota de 7,5%%.\n\n", desc1);
        printf("O servidor %s possue desconto de %.2f, \numa perda de %.2f%% da sua produtividade \ncom horas extras e gratifica��o.", nome, desc1, (perda*100));

    };

    if (2826.66<=sal && sal<=3751.05) {
        desc2 = (((sal-dep-(sal1*0.11))*0.15)-354.8);
        perda = (desc2/(grat + vhor50 + vhor100));
        printf("\n\nO valor do desconto � R$ %.3f, referente a aliquota de 15%%.\n\n", desc2);
        printf("O servidor %s possue desconto de %.2f, \numa perda de %.2f%% da sua produtividade \ncom horas extras e gratifica��o.", nome, desc2, (perda*100));

    };

    if (3751.06<=sal && sal<=4664.68) {
        desc3 = (((sal-dep-(sal1*0.11))*0.225)-636.13);
        perda = (desc3/(grat + vhor50 + vhor100));
        printf("\n\nO valor do desconto � R$ %.3f, referente a aliquota de 22,5%%.\n\n", desc3);
        printf("O servidor %s possue desconto de %.2f, \numa perda de %.2f%% da sua produtividade \ncom horas extras e gratifica��o.", nome, desc3, (perda*100));


    };

    if (sal>4664.68) {
        desc4 = (((sal-dep-(sal1*0.11))*0.275)-869.36);
        perda = (desc4/(grat + vhor50 + vhor100));
        printf("\n\nO valor do desconto � R$ %.3f, referente a aliquota de 27,5%%.\n\n", desc4);
        printf("O servidor %s possue desconto de %.2f, \numa perda de %.2f%% da sua produtividade \ncom horas extras e gratifica��o.", nome, desc4, (perda*100));

    };




};
