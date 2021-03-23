#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int lin, col, mat[4][3];
  int val=0;

  for (lin=0; lin<4; lin++){
    for (col=0; col<3; col++){
      mat[lin][col] = rand() % 100;
    }
  }

  for (lin=0; lin<4; lin++){
    for (col=0; col<3; col++){
      printf("%2d ", mat[lin][col]);
    }
    printf("\n");
  }

  printf("Informe um valor: ");
  scanf("%d", &val);
  
print("\n\n");

printf("Valores maiores que %d", val);
print("\n");

for (lin=0; lin<4; lin++){
    for (col=0; col<3; col++){
      if(val < mat[lin][col]){
        printf("%d ", mat[lin][col]);
      }
    }
    
  }

  return 0;
}
