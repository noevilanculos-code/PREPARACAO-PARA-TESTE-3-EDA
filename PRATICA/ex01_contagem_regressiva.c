/*
 * Exercício 1 - Contagem Regressiva
 * Duas versões: iterativa e recursiva
 */
#include <stdio.h>

void contagem_iterativa(int n) {
    for (int i = n; i >= 0; i--)
        printf("%d ", i);
    printf("\n");
}

void contagem_recursiva(int n) {
    if (n < 0) return;
    printf("%d ", n);
    contagem_recursiva(n - 1);
}

int main() {
    int n = 5;
    printf("Iterativa: ");
    contagem_iterativa(n);
    printf("Recursiva: ");
    contagem_recursiva(n);
    printf("\n");
    return 0;
}
