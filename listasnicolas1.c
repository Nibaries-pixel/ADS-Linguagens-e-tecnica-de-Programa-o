#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159


int main(){
	
	//ex 1 trocar as ordens
	printf("exerceicio 1\n");
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor: ");
	scanf("%d", &segundo);
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	printf("%d e %d\n", primeiro, segundo);
	
//ex 2
  printf("===================================\n");
  printf("Exercicio 2\n");
  
double numero;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    printf("Em notacao cientifica: %.3e\n", numero);

 //ex 3 base binária
    printf("===================================\n");
    printf("Exercicio 3\n");
    int n, res;
    int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

    printf("Insira o valor para a conversao: ");
    scanf("%d", &n);

    bit_64 = n%2;
    res = n/2;
    bit_32 = res%2;
    res = res/2;
    bit_16 = res%2;
    res = res/2;
    bit_8 = res%2;
    res = res/2;
    bit_4 = res%2;
    res = res/2;
    bit_2 = res%2;
    res = res/2;

    printf("O valor %d em binário é: %d %d %d %d %d %d\n", n, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);

    //ex 4 salário
    printf("===================================\n");
    printf("Exercicio 4\n");
      float sal, vendas, comissao, total;

      printf("Digite o seu salário: ");
      scanf("%f", &sal);

      printf("Digite o valor total de vendas: ");
      scanf("%f", &vendas);

      comissao=vendas*0.15;

      if (vendas > 0)
      {
      total = sal + comissao;
      printf("Seu salario e de %.2f, a boni doida e %.2f.\n TOTAL: R$%.2f\n", sal, comissao, total);
      }
      else {
        printf("Seu salario e R$%.2f e você nao teve nenhuma comissao!\n", sal);
      }

      //ex 5
      printf("===================================\n");
      printf("Exercicio 5\n");

      int n1, n2, n3, n4, soma, media, produ;

      printf("Digite o primeiro numero: ");
      scanf("%d", &n1);

      printf("Digite o segundo numero: ");
      scanf("%d", &n2);

      printf("Digite o terceiro numero: ");
      scanf("%d", &n3);

      printf("Digite o quarto numero: ");
      scanf("%d", &n4);

      
      soma = n1 + n2 + n3 + n4;
      printf("A soma entre %d + %d + %d + %d é igual a: %d\n", n1, n2, n3, n4, soma);

      media = soma/4;
      printf("A media entre os numeros escolhidos e %d\n", media);

      produ = n1*n2*n3*n4;
      printf("O produtorio e %d\n", produ);

      //ex 6
      printf("===================================\n");
      printf("Exercicio 6\n");

      int ano, meses, dias;

      printf("Digite sua idade: ");
      scanf("%d", &ano);


      meses = ano*12;
      dias = ano*365;

      printf("Sua idade em anos: %d\n", ano);
      printf("Sua idade em meses: %d\n", meses);
      printf("Sua idade em dias: %d\n", dias);




    //ex 7
    printf("===================================\n");
    printf("Exercicio 7\n");

    float raio, r3, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    r3 = pow(raio, 3);
    volume = (4/3.0) * pi * r3;

    printf("O volume da esfera é: %.2f\n", volume);



    //ex 8
    printf("===================================\n");
    printf("Exercicio 8\n");

    int x1, x2, y1, y2, p1, p2;
    float dist;

    printf("Insira o valor do par ordenado (x1, y1): ");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Insira o valor do par ordenado (x2, y2): ");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    p1 = pow(x2-x1, 2); p2 = pow(y2-y1, 2);
    dist = sqrt(p1 + p2);
    printf("A distancia e: %f", dist);
	
	return 0;
}
