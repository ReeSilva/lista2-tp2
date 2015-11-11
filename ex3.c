// PROGRAM CALCULA_DESVIO
// AUTOR: THIAGO KINJO
// DATA: 10/11/2015

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  system("clear");

  // Declaração de variáveis
  int iN     = 0;
  int iRun   = 1;
  int iCount = 0;
  int iSoma  = 0;

  float fResultado, fResultadoParcial, fMedia = 0.0;


  while (iRun == 1) {

    system("clear");
    printf("*****Bem vindo ao calculo de desvio.*****\n\n");
    printf("Quantas pessoas voce entrevistou?\n");
    scanf("%d", &iN);

    int aPessoas[iN];

    printf("Quais os valores informados?\n");
    for (iCount = 0; iCount < iN; iCount++) {
      printf("Qual o valor para a %d pessoa", iCount+1);
      scanf("%d", &aPessoas[iCount]);
    }

    for (iCount = 0; iCount < iN; iCount++) {
      iSoma += aPessoas[iCount];
    }
    fMedia = iSoma/iN;

    for (iCount = 0; iCount < iN; iCount++) {
      fResultadoParcial = pow(aPessoas[iCount]-fMedia,2);
    }
    fResultado = sqrt(fResultadoParcial);

    printf("O desvio e: %.2f\n", fResultado);
    printf("Você deseja rodar o programa novamente?\n1 - Sim | 2 - Nao");
    scanf("%d", &iRun);
  }

}
