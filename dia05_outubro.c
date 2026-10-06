#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int c_m(int a, int b) {
	if (a>b) return a;
	else return b;
}
int main() {
	int valor[10];
	int i;
	
	printf("Leia os numeros");
	for (i=0; i<10; i++){
		sacnf("%d",&valor[i]);
	}for(i=9; i>0; i--){
		printf("|%d|", valor[i]);
	}
	return 0;
}
