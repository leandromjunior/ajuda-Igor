#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int mat[7][4], matb[7][4], matsoma[7][4];
	int lin, col;
	
	for(lin=0;lin<7;lin++){
   		for(col=0;col<4;col++){
     		printf("[%d][%d]: ",lin+1,col+1);
     		scanf("%d", &mat[lin][col]);
   		}
  	}
  	
  	printf("\n");
  	printf("Segunda Matriz");
  	printf("\n");
  	
  	for(lin=0;lin<7;lin++){
   		for(col=0;col<4;col++){
     		printf("[%d][%d]: ",lin+1,col+1);
     		scanf("%d", &matb[lin][col]);
   		}
  	}
  	
  	printf("\n");
  	printf("Matriz 1 impressa");
  	printf("\n");
  	
  	for(lin=0;lin<7;lin++){
   		for(col=0;col<4;col++){
     		printf("%2d ", mat[lin][col]);
     		
     		if (col==3){
			 printf("\n");
			 }
   		}
  	}
  	
  	
  	printf("\n");
  	printf("Matriz 2 impressa");
  	printf("\n");
  	
  	for(lin=0;lin<7;lin++){
   		for(col=0;col<4;col++){
     		printf("%2d ", matb[lin][col]);
     		
     		if (col==3){
			 printf("\n");
			 }
   		}
  	}
  	
  	printf("\n");
  	printf("Matriz de soma");
  	printf("\n");
  	
  	for(lin=0;lin<7;lin++){
    	for(col=0;col<4;col++){
     		matsoma[lin][col] = mat[lin][col] + matb[lin][col];
     		printf("%3d",matsoma[lin][col]);
     		
     		if (col==3){
			 printf("\n");
			 }
     	}
	}
  	
  	return 0;
  
}
