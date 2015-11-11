// PROGRAM CALCULA_PESO
// AUTOR: THIAGO KINJO
// DATA: 10/11/2015

#include <stdio.h>
#include <stdlib.h>

int main() {

  system("clear");

  // Declaração de variáveis
  int iRun   = 1;

  float fInicio, fFim, fCalcula = 0.0;

  printf("*****Bem vindo ao Soma de Pares.*****\n");

  while (iRun == 1) {

    fInicio    = 0.0;
    fFim       = 0.0;
    fCalcula   = 0.0;

    printf("Primeiramente, digite um valor inicial:\n");
    scanf("%f", &fInicio);

    system("clear");

    printf("Agora digite um valor final:\n");
    scanf("%f", &fFim);

    // Validação de valores positivos
    if (fInicio < 0 || fFim < 0) {
      printf("Os valores nao podem ser negativos. Digite 1 para tentar de novo ou 0 para sair do programa:\n");
      scanf("%d", &iRun);
      system("clear");
      continue;
    }

    // Validação de valor inicial menor que final
    if (fInicio > fFim) {
      printf("O valor inicial nao pode ser maior que o final. Digite 1 para tentar de novo ou 0 para sair do programa:\n");
      scanf("%d", &iRun);
      system("clear");
      continue;
    }

    system("clear");

    printf("\n\nOk, seus valores sao %.2f como valor inicial e %.2f para valor final.\n", fInicio, fFim);

    fCalcula = fInicio;

    while (fCalcula <= fFim) {
      printf("%.2f metros cubicos de gas helio conseguem suspender um peso de %.2f quilos.\n", fCalcula, fCalcula);

      fCalcula += 10.0;
    }

    printf("\n\nDigite 1 para rodar o programa novamente ou 0 para sair:\n");
    scanf("%d", &iRun);
    system("clear");
  }

}
