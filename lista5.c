#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 100

void exercicio1() {
	int v[TAM], ordenado[TAM], i, j, aux;

	printf("Digite %d numeros inteiros:\n", TAM);
	for (i = 0; i < TAM; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &v[i]);
		ordenado[i] = v[i];
	}

	printf("\nOrdem inversa:\n");
	for (i = TAM - 1; i >= 0; i--) {
		printf("%d ", v[i]);
	}

	for (i = 0; i < TAM - 1; i++) {
		for (j = 0; j < TAM - 1 - i; j++) {
			if (ordenado[j] < ordenado[j + 1]) {
				aux = ordenado[j];
				ordenado[j] = ordenado[j + 1];
				ordenado[j + 1] = aux;
			}
		}
	}

	printf("\n\nDo maior para o menor:\n");
	for (i = 0; i < TAM; i++) {
		printf("%d ", ordenado[i]);
	}
	printf("\n");
}

void exercicio2() {
	double valor, a;
	int n = 0;

	printf("Digite um valor positivo: ");
	scanf("%lf", &valor);

	if (valor <= 0) {
		printf("Digite somente valores positivos\n");
		return;
	}

	a = valor;
	while (a >= 10) {
		a = a / 10;
		n++;
	}
	while (a < 1) {
		a = a * 10;
		n--;
	}

	printf("Notacao cientifica: %.4f x 10^%d\n", a, n);
}

void exercicio3() {
	int n, num, bits[7], i, total = 0;

	printf("Digite um numero (1 a 64): ");
	scanf("%d", &n);

	if (n < 1 || n > 64) {
		printf("Numero invalido\n");
		return;
	}

	num = n;
	while (num > 0) {
		bits[total] = num % 2;
		num = num / 2;
		total++;
	}

	printf("%d em binario: ", n);
	for (i = total - 1; i >= 0; i--) {
		printf("%d", bits[i]);
	}
	printf("\n");
}

int maior_ab(int a, int b) {
	return (a + b + abs(a - b)) / 2;
}

void exercicio4() {
	int v[10], i, maior;

	for (i = 0; i < 10; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &v[i]);
	}

	maior = maior_ab(v[0], v[1]);
	for (i = 2; i < 10; i++) {
		maior = maior_ab(maior, v[i]);
	}

	printf("%d eh o maior\n", maior);
}

int eh_primo(int n) {
	int i;

	if (n < 2) {
		return 0;
	}
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void exercicio5() {
	int v[TAM], i;

	for (i = 0; i < TAM; i++) {
		v[i] = i + 1;
	}

	for (i = 0; i < TAM; i++) {
		printf("%d: ", v[i]);

		if (v[i] % 2 == 0) {
			printf("par, ");
		} else {
			printf("impar, ");
		}

		if (eh_primo(v[i])) {
			printf("primo\n");
		} else {
			printf("nao primo\n");
		}
	}
}

float distancia(float ax, float ay, float bx, float by) {
	return sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
}

void exercicio6() {
	float px1[10], py1[10], px2[10], py2[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("\nPar de pontos %d\n", i + 1);
		printf("x1: ");
		scanf("%f", &px1[i]);
		printf("y1: ");
		scanf("%f", &py1[i]);
		printf("x2: ");
		scanf("%f", &px2[i]);
		printf("y2: ");
		scanf("%f", &py2[i]);
	}

	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("Distancia %d: %.2f\n", i + 1, distancia(px1[i], py1[i], px2[i], py2[i]));
	}
}

void exercicio7() {
	int v[TAM], i, achou = 0;

	printf("Digite %d numeros inteiros:\n", TAM);
	for (i = 0; i < TAM; i++) {
		printf("Numero %d: ", i + 1);
		scanf("%d", &v[i]);
	}

	printf("\nValores em ordem consecutiva:\n");
	for (i = 0; i < TAM - 1; i++) {
		if (v[i + 1] == v[i] + 1) {
			printf("%d e %d\n", v[i], v[i + 1]);
			achou = 1;
		}
	}

	if (achou == 0) {
		printf("Nenhum valor em ordem consecutiva\n");
	}
}

int main() {
	int opcao;

	while (1) {
		printf("\n========== LISTA 05 ==========\n");
		printf("1. Ordem inversa e decrescente\n");
		printf("2. Notacao cientifica\n");
		printf("3. Numero em binario\n");
		printf("4. Maior de 10 valores\n");
		printf("5. Paridade e primalidade\n");
		printf("6. Distancia euclidiana\n");
		printf("7. Numeros consecutivos\n");
		printf("0. Sair\n");
		printf("Escolha uma opcao: ");

		opcao = -1;
		scanf("%d", &opcao);
		fflush(stdin);

		if (opcao == 0) {
			printf("Encerrando...\n");
			break;
		}

		switch (opcao) {
			case 1:
				exercicio1();
				break;
			case 2:
				exercicio2();
				break;
			case 3:
				exercicio3();
				break;
			case 4:
				exercicio4();
				break;
			case 5:
				exercicio5();
				break;
			case 6:
				exercicio6();
				break;
			case 7:
				exercicio7();
				break;
			default:
				printf("Opcao invalida, tente novamente\n");
				break;
		}
		fflush(stdin);
	}

	return 0;
}
