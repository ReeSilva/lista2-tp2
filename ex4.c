// PROGRAM CONVERTE_BINARIO
// AUTOR: THIAGO KINJO
// DATA: 10/11/2015

#include <stdio.h>
#include <stdlib.h>

int main() {

  system("clear");

  // Declaração de variáveis
  int iDecimal, iCount, iBinario, iQtd = 0;
  int iRun                             = 1;
  int iBinarios[32]                    = 0;

  printf("***************************************\n");
  printf("*  Bem vindo a Conversao de Binarios  *\n");
  printf("***************************************\n\n\n\n\n");

  while (iRun == 1) {

    iDecimal = 0;
    iCount   = 0;
    iQtd     = 0;

    printf("Primeiramente, digite o valor decimal a ser convertido:\n");
    scanf("%d", &iDecimal);

    system("clear");

    for (iCount = iDecimal; iCount > 0; iCount++) {
      if (iDecimal != 1) {
        iBinario = iDecimal % 2;
        iDecimal = iDecimal / 2;
      } else {
        iBinario = 1;
      }
      iQtd++;
    }
  }

}
