#include <stdio.h>
#include <stdlib.h>

int achou = 0;

void mochilas(int mostrarSobra) {
    int total, cap;
    printf("Total de itens: ");
    scanf("%d", &total);
    printf("Capacidade de cada mochila: ");
    scanf("%d", &cap);

    if (cap <= 0) {
        printf("Capacidade invalida!\n");
    } else {
        printf("Mochilas cheias: %d\n", total / cap);
        if (mostrarSobra == 1) {
            printf("Itens que sobraram: %d\n", total % cap);
        }
    }
}

void p1q1() {
    int a, b, c;
    printf("Digite a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
    } else if (a < b && b < c) {
        printf("%d %d %d\n", a, b, c);
    } else if (a < c && c < b) {
        printf("%d %d %d\n", a, c, b);
    } else if (b < a && a < c) {
        printf("%d %d %d\n", b, a, c);
    } else if (b < c && c < a) {
        printf("%d %d %d\n", b, c, a);
    } else if (c < a && a < b) {
        printf("%d %d %d\n", c, a, b);
    } else {
        printf("%d %d %d\n", c, b, a);
    }
}

void p1q2() {
    float v1, v2;
    int cod;
    printf("Digite o 1o valor: ");
    scanf("%f", &v1);
    printf("Digite o 2o valor: ");
    scanf("%f", &v2);
    printf("Codigo da operacao (1 = >, 2 = <, 3 = ==, 4 = !=): ");
    scanf("%d", &cod);

    switch (cod) {
        case 1:
            if (v1 > v2) printf("Verdadeiro\n");
            else printf("Falso\n");
            break;
        case 2:
            if (v1 < v2) printf("Verdadeiro\n");
            else printf("Falso\n");
            break;
        case 3:
            if (v1 == v2) printf("Verdadeiro\n");
            else printf("Falso\n");
            break;
        case 4:
            if (v1 != v2) printf("Verdadeiro\n");
            else printf("Falso\n");
            break;
        default:
            printf("operador invalido\n");
    }
}

void prova1() {
    int q;
    printf("\n--- PROVA 1 ---\n");
    printf("0 - Mochilas\n");
    printf("1 - Tres numeros distintos\n");
    printf("2 - Operacoes relacionais\n");
    printf("Escolha a questao: ");
    scanf("%d", &q);

    switch (q) {
        case 0: mochilas(1); break;
        case 1: p1q1(); break;
        case 2: p1q2(); break;
        default: printf("Questao invalida!\n");
    }
}

void p2q0() {
    int n1, n2, n3, n4;
    printf("Digite 4 numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("Impares e multiplos de 5:\n");
    if (n1 % 2 != 0 && n1 % 5 == 0) printf("%d\n", n1);
    if (n2 % 2 != 0 && n2 % 5 == 0) printf("%d\n", n2);
    if (n3 % 2 != 0 && n3 % 5 == 0) printf("%d\n", n3);
    if (n4 % 2 != 0 && n4 % 5 == 0) printf("%d\n", n4);
}

void p2q2() {
    float valor, res;
    int de, para;
    int ok1, ok2;

    printf("Valor a converter: ");
    scanf("%f", &valor);
    printf("Codigo da unidade do valor: ");
    scanf("%d", &de);
    printf("Codigo da unidade de conversao: ");
    scanf("%d", &para);

    switch (de) {
        case 1: case 2: case 3: case 4: case 5:
        case 8: case 9: case 10: case 11:
            ok1 = 1; break;
        default:
            ok1 = 0;
    }
    switch (para) {
        case 1: case 2: case 3: case 4: case 5:
        case 8: case 9: case 10: case 11:
            ok2 = 1; break;
        default:
            ok2 = 0;
    }

    if (ok1 == 0 || ok2 == 0) {
        printf("Erro: unidade nao existe no sistema!\n");
    } else if (de == para) {
        printf("Resultado: %.2f\n", valor);
    } else {
        switch (de) {
            case 1:
                if (para == 2) {
                    res = valor * 1.8 + 32;
                    printf("Resultado: %.2f F\n", res);
                } else if (para == 3) {
                    res = valor + 273.15;
                    printf("Resultado: %.2f K\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 2:
                if (para == 1) {
                    res = (valor - 32) / 1.8;
                    printf("Resultado: %.2f C\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 3:
                if (para == 1) {
                    res = valor - 273.15;
                    printf("Resultado: %.2f C\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 4:
                if (para == 5) {
                    res = valor / 1609.34;
                    printf("Resultado: %.4f mi\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 5:
                if (para == 4) {
                    res = valor * 1609.34;
                    printf("Resultado: %.2f m\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 8:
                if (para == 9) {
                    res = valor * 2.205;
                    printf("Resultado: %.2f lb\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 9:
                if (para == 8) {
                    res = valor / 2.205;
                    printf("Resultado: %.2f kg\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 10:
                if (para == 11) {
                    res = valor * 1.609;
                    printf("Resultado: %.2f km/h\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
            case 11:
                if (para == 10) {
                    res = valor / 1.609;
                    printf("Resultado: %.2f mph\n", res);
                } else {
                    printf("Conversao nao disponivel!\n");
                }
                break;
        }
    }
}

void prova2() {
    int q;
    printf("\n--- PROVA 2 ---\n");
    printf("0 - Impares multiplos de 5\n");
    printf("1 - Mochilas\n");
    printf("2 - Conversao de unidades\n");
    printf("Escolha a questao: ");
    scanf("%d", &q);

    switch (q) {
        case 0: p2q0(); break;
        case 1: mochilas(0); break;
        case 2: p2q2(); break;
        default: printf("Questao invalida!\n");
    }
}

void compara(int x, int y) {
    if (x - y == 1 || y - x == 1) {
        printf("%d e %d sao consecutivos\n", x, y);
        achou = 1;
    }
}

void p3q0() {
    int a, b, c, d, e;
    printf("Digite 5 numeros inteiros: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    achou = 0;
    compara(a, b);
    compara(a, c);
    compara(a, d);
    compara(a, e);
    compara(b, c);
    compara(b, d);
    compara(b, e);
    compara(c, d);
    compara(c, e);
    compara(d, e);

    if (achou == 0) {
        printf("Nenhum numero consecutivo!\n");
    }
}

void p3q1() {
    float peso, altura, imc;
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida!\n");
    } else {
        imc = peso / (altura * altura);
        printf("IMC = %.2f - ", imc);

        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc < 25) {
            printf("Normal\n");
        } else if (imc < 30) {
            printf("Acima do peso\n");
        } else {
            printf("Obeso\n");
        }
    }
}

void p3q2() {
    int A = 6, B = 0, C = 0;
    printf("Inicio: A=%d B=%d C=%d\n\n", A, B, C);

    A = A - 1; C = C + 1;
    printf("1) Disco 1: A -> C | A=%d B=%d C=%d\n", A, B, C);

    A = A - 2; B = B + 2;
    printf("2) Disco 2: A -> B | A=%d B=%d C=%d\n", A, B, C);

    C = C - 1; B = B + 1;
    printf("3) Disco 1: C -> B | A=%d B=%d C=%d\n", A, B, C);

    A = A - 3; C = C + 3;
    printf("4) Disco 3: A -> C | A=%d B=%d C=%d\n", A, B, C);

    B = B - 1; A = A + 1;
    printf("5) Disco 1: B -> A | A=%d B=%d C=%d\n", A, B, C);

    B = B - 2; C = C + 2;
    printf("6) Disco 2: B -> C | A=%d B=%d C=%d\n", A, B, C);

    A = A - 1; C = C + 1;
    printf("7) Disco 1: A -> C | A=%d B=%d C=%d\n", A, B, C);

    printf("\nResolvido em 7 movimentos!\n");
}

void prova3() {
    int q;
    printf("\n--- PROVA 3 ---\n");
    printf("0 - Numeros consecutivos\n");
    printf("1 - IMC\n");
    printf("2 - Torres de Hanoi\n");
    printf("Escolha a questao: ");
    scanf("%d", &q);

    switch (q) {
        case 0: p3q0(); break;
        case 1: p3q1(); break;
        case 2: p3q2(); break;
        default: printf("Questao invalida!\n");
    }
}

int main() {
    int prova;

    printf("===== MENU DE PROVAS =====\n");
    printf("1 - ESOFT M B\n");
    printf("2 - ESOFT M A\n");
    printf("3 - =ADS N A\n");
    printf("Escolha a prova: ");
    scanf("%d", &prova);

    switch (prova) {
        case 1: prova1(); break;
        case 2: prova2(); break;
        case 3: prova3(); break;
        default: printf("Prova invalida!\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
