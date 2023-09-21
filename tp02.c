#include <stdio.h>

int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void decomposicao_em_primos(int numero) {
    for (int i = 2; i <= numero/2; i++) {
        if (primo(i) && primo(numero - i)) {
            printf("A decomposicao de %d em dois numeros primos e: %d + %d\n", numero, i, numero - i);
            return;
        }
    }
    printf("Nao foi possivel encontrar uma decomposicao em dois numeros primos para %d.\n", numero);
}

int main() {
    int numero;
    printf("Digite um número inteiro maior que 2: ");
    scanf("%d", &numero);

    if (numero <= 2) {
        printf("O número fornecido deve ser maior que 2.\n");
    } else {
        decomposicao_em_primos(numero);
    }

    return 0;
}
