// PROGRAM SOMA_PARES
// AUTOR: THIAGO KINJO
// DATA: 10/11/2015

#include <stdio.h>
#include <stdlib.h>

int main() {
  
  system("clear");

  // Declaração de variáveis
  int iInicio, iFim, iResultado, iCount = 0;
  int iRun = 1;
    
  printf("\n\n***************************************\n");
  printf("*     Bem vindo ao Soma de Pares.     *\n");
  printf("***************************************\n\n\n\n\n");

  while (iRun == 1) {
  
    iInicio    = 0;
    iFim       = 0;
    iResultado = 0;

    printf("Primeiramente, digite um valor inicial:\n");
    scanf("%d", &iInicio);

    system("clear");

    printf("Agora digite um valor final:\n");
    scanf("%d", &iFim);
    
    // Validação de valores positivos
    if (iInicio < 0 || iFim < 0) {
      printf("Os valores nao podem ser negativos. Digite 1 para tentar de novo ou 0 para sair do programa:\n");
      scanf("%d", &iRun);
      system("clear");
      continue;
    }
  
    // Validação de valor inicial menor que final
    if (iInicio > iFim) {
      printf("O valor inicial nao pode ser maior que o final. Digite 1 para tentar de novo ou 0 para sair do programa:\n");
      scanf("%d", &iRun);
      system("clear");
      continue;
    }

    system("clear");

    printf("\n\nOk, seus valores sao %d como valor inicial e %d para valor final.", iInicio, iFim);

    do {
      if (iInicio % 2 == 0) {
        iResultado += iInicio;
      }

      iInicio++;
    } while (iInicio <= iFim);

    printf("\n\nE a soma dos pares entre esses valores e: %d", iResultado);
    printf("\n\nDigite 1 para rodar o programa novamente ou 0 para sair:\n");
    scanf("%d", &iRun);
    system("clear");
  }

}
