#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	int result;
	
	printf("INsira os valores de A,B,C: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		result = a;
	}
	else{
		result = b;
	}
	if (result<c){
		result = c;
	}	

	printf("%d e o maior", result);
	

	int n;
	
	printf("INsira um numero: \n");
	scanf("%d", &n);
	
	if (n>0){
		printf("O inverso de %d ", n);
		n = n*(-1);
		printf("seria %d", n);
	
	}	
	else if (n<0){
		printf("O quadrado do numero %d", n);
		n = n*n;
		printf(" seria %d ", n);
	}	
	else
		
		printf("Nao aceitamos o 0");
	
	

		
	return 0;
}
