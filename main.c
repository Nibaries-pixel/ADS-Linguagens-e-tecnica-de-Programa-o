#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cpf, cpff, c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
	
	printf("Insira o cpf: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10,&c11);
	
	c1 = c1*10;
	c2 = c2*9;
	c3 = c3*8;
	c4 = c4*7;
	c5 = c5*6;
	c6 = c6*5;
	c7 = c7*4;
	c8 = c8*3;
	c9 = c9*2;
	
	cpf = c1+c2+c3+c4+c5+c6+c7+c8+c9;
	
	cpf = cpf*10;
	cpf = cpf%11;
	
	c1 = (c1/10)*11;
	c2 = (c2/9)*10;
	c3 = (c3/8)*9;
	c4 = (c4/7)*8;
	c5 = (c5/6)*7;
	c6 = (c6/5)*6;
	c7 = (c7/4)*5;
	c8 = (c8/3)*4;
	c9 = (c9/2)*3;
	c10 = c10*2;
	
	cpff = c1+c2+c3+c4+c5+c6+c7+c8+c9+c10;
	
	cpff = cpff*10;
	cpff = cpff%11;
	
	printf("%d""%d", cpf,cpff);
	
	c10 = c10/2;
	
	if (c10 == cpf && cpff == c11){
	
		printf("\nCPF Valido");
}
	else{
	
		printf("\nCPF Invalido");
}
	
	return 0;
}
