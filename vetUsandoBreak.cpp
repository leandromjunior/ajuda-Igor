#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetPar[500], vetImpar[500], vetTotal[500];
  int i = 0, val[500];
  int j=0;
  int contPar=0, contImpar=0, contTotal=0;

  while (i <=500 ){
    printf("Informe um valor:");
    scanf("%d", &val[i]);

    if(val[i] == -1){
      break;
    }

    if(val[i] % 2 == 0){
      vetPar[contPar] = val[i];
      contPar++;
    }
    else{
      vetImpar[contImpar] = val[i];
      contImpar++;
    }

    vetTotal[contTotal] = val[i];
    contTotal++;

    i++;
  }
printf("Vetor Par: ");
  for (j=0;j<contPar;j++){
    printf("%d ", vetPar[j]);
  }

  printf("\n\n");

printf("Vetor Impar: ");
  for (j=0;j<contImpar;j++){
    printf("%d ", vetImpar[j]);
  }

  printf("\n\n");

printf("Vetor Completo: ");
  for (j=0;j<contTotal;j++){
    printf("%d ", vetTotal[j]);
  }

  return 0;
}
