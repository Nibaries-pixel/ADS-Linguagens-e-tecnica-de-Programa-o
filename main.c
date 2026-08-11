#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float raio, area, raioq;
	printf("Insira o valor do R? \n");
	scanf("%f", &raio);
	raioq = raio*raio;
	area = pi*raioq;
	printf("A are do circulo de raio %f = %f", raio, area);
	
	// area do trapezio descendente
	
	float areaT, BaseB, Baseb, altura;
	
	printf("\nEscreve o valor da base maior: \n");
	scanf("%f", &BaseB);
	printf("Escreva o valorda base menor: \n");
	scanf("%f", &Baseb);
	printf("Escreva o valor da altura: \n");
	scanf("%f", &altura);
	
	areaT = ((BaseB + Baseb)*altura)/2;
	printf("Area do trapezio é %f", areaT);
	return 0;
}
