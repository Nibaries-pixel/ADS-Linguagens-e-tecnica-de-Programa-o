#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2;
	
	printf("o maior entre |%d||%d||%d| = %d", a, b, c, maior);
	
	
	
	
	return 0;
}
