#include <stdio.h>
#include <stdlib.h>

int main() {

  int vetPar[500], vetImpar[500], vetTotal[500];
  int val;
  int j=0;
  int contPar=0, contImpar=0, contTotal=0;

  while (val != -1 ){
    printf("Informe um valor:");
    scanf("%d", &val);

    if(val % 2 == 0)  {
      vetPar[contPar] = val;
      contPar++;
    }
    else if (val % 2 == 1 && val >= 0){
      vetImpar[contImpar] = val;
      contImpar++;
    }
	
	if (val >= 0){
	
    vetTotal[contTotal] = val;
    contTotal++;
	}
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
