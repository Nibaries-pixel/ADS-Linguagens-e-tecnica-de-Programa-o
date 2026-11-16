#include <stdio.h>
#include <math.h>

#define G 9.8
#define K 0.5
#define PI 3.14159265

void caixa_eletronico() {
	int valor, n100, n50, n10, n5, n2, n1;

	printf("Digite o valor do saque: R$ ");
	scanf("%d", &valor);

	n100 = valor / 100;
	valor = valor % 100;
	n50 = valor / 50;
	valor = valor % 50;
	n10 = valor / 10;
	valor = valor % 10;
	n5 = valor / 5;
	valor = valor % 5;
	n2 = valor / 2;
	valor = valor % 2;
	n1 = valor;

	printf("Notas de R$ 100: %d\n", n100);
	printf("Notas de R$ 50: %d\n", n50);
	printf("Notas de R$ 10: %d\n", n10);
	printf("Notas de R$ 5: %d\n", n5);
	printf("Notas de R$ 2: %d\n", n2);
	printf("Notas de R$ 1: %d\n", n1);
}

double tempo_voo(double t, double vy) {
	double y;

	t = t + 0.01;
	y = ((vy + G / K) / K) * (1 - exp(-K * t)) - (G / K) * t;

	if (y <= 0) {
		return t;
	}
	return tempo_voo(t, vy);
}

void trajetoria() {
	double v0, graus, rad, vx, vy, t, alcance;

	printf("Velocidade inicial (m/s): ");
	scanf("%lf", &v0);
	printf("Angulo (graus): ");
	scanf("%lf", &graus);

	rad = graus * (PI / 180);
	vx = v0 * cos(rad);
	vy = v0 * sin(rad);

	t = tempo_voo(0, vy);
	alcance = (vx / K) * (1 - exp(-K * t));

	printf("Alcance maximo: %.2f m\n", alcance);
	printf("Tempo de voo: %.2f s\n", t);
}

float calcular_inss(float salario) {
	if (salario > 7786.02) {
		salario = 7786.02;
	}

	if (salario <= 1412.00) {
		return salario * 0.075;
	} else if (salario <= 2666.68) {
		return salario * 0.09;
	} else if (salario <= 4000.03) {
		return salario * 0.12;
	} else {
		return salario * 0.14;
	}
}

float calcular_irpf(float base) {
	if (base <= 2259.20) {
		return 0;
	} else if (base <= 2826.65) {
		return (base * 0.075) - 169.44;
	} else if (base <= 3751.05) {
		return (base * 0.15) - 381.44;
	} else if (base <= 4664.68) {
		return (base * 0.225) - 662.77;
	} else {
		return (base * 0.275) - 896.00;
	}
}

void mostrar_inss() {
	float salario;

	printf("Salario bruto: R$ ");
	scanf("%f", &salario);

	printf("Desconto INSS: R$ %.2f\n", calcular_inss(salario));
}

void mostrar_irpf() {
	float base;

	printf("Salario base (Bruto - INSS): R$ ");
	scanf("%f", &base);

	printf("Desconto IRPF: R$ %.2f\n", calcular_irpf(base));
}

void contra_cheque() {
	float valor_hora, horas, bruto, inss, irpf, liquido;

	printf("Valor da hora trabalhada: R$ ");
	scanf("%f", &valor_hora);
	printf("Quantidade de horas no mes: ");
	scanf("%f", &horas);

	bruto = horas * valor_hora;
	inss = calcular_inss(bruto);
	irpf = calcular_irpf(bruto - inss);
	liquido = bruto - inss - irpf;

	
	printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
	printf("======================================================\n");
	printf(" Salario Bruto (Horas x Valor):   R$ %8.2f\n", bruto);
	printf(" (-) Desconto INSS:               R$ %8.2f\n", inss);
	printf(" (-) Desconto IRPF:               R$ %8.2f\n", irpf);
	printf("------------------------------------------------------\n");
	printf(" LIQUIDO A RECEBER:               R$ %8.2f\n", liquido);
	
}

int main() {
	int opcao;

	while (1) {
		printf("\n========== LISTA DE EXERCICIOS ==========\n");
		printf("1. Exercicio 05 - Terminal Infinity Cash\n");
		printf("2. Exercicio 06 - Operacao ENIAC\n");
		printf("3. Exercicio 07 - Calculo de INSS\n");
		printf("4. Exercicio 08 - Calculo de IRPF\n");
		printf("5. Exercicio 09 - Contra-cheque\n");
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
				caixa_eletronico();
				break;
			case 2:
				trajetoria();
				break;
			case 3:
				mostrar_inss();
				break;
			case 4:
				mostrar_irpf();
				break;
			case 5:
				contra_cheque();
				break;
			default:
				printf("Opcao invalida, tente novamente\n");
				break;
		}
		fflush(stdin);
	}

	return 0;
}
