#include <stdio.h>
#include <stdlib.h>

/* crie um programa que leia um número, entre 1 e 9 e caso ele seja positivo, 
 verifique se ele seja positivo, verifique se ele é um numero primo, caso seja,
 imprima seu dobro, caso não seja primo, verifique se é par ou impar. 
 Se for par mostre o resultado da soma com 2. Se for impar mostre o seu proximo
 e seu anterior..
 Caso não seja entre 1 e 9 mostre _out_of_range */

int main(int argc, char *argv[]) {
	
	
	int n;
	printf("Entre com o numero: ");
	scanf("%d", &n);
	
	 
	if(n<10 && n>1)
	
		if(n==1 || n==2 || n==3 || n==5 || n==7)
			printf("o dobro de %d = %d", n, (n*2));
		else if (n%2 == 0)
			printf("%d+2 = %d",n, n+2);
		else
			printf("|%d|%d|%d|",n-1,n, n+1);
		
	else printf("out_of_range");
	
	
	char op;
	scanf("%c", &op);
	switch(op){
	
	case 'a': printf("Opa ta falando com ele"); break;
	
	case 'b': printf("Benentido"); break;
	
	case 'c': printf("É complicado a situação"); break;
	
	case 'd': printf("Tamo junto"); break;
	}
	
	return 0;
}
