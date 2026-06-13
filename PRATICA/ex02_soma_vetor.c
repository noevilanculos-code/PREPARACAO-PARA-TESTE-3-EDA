/*
 * Exercício 2 - Soma dos Elementos de um Vetor
 * Duas versões: iterativa e recursiva
 */
#include <stdio.h>

int soma_iterativa(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++)
        soma += v[i];
    return soma;
}

int soma_recursiva(int v[], int n) {
    if (n == 0) return 0;
    return v[n - 1] + soma_recursiva(v, n - 1);
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Vetor: {1, 2, 3, 4, 5}\n");
    printf("Soma iterativa:  %d\n", soma_iterativa(v, n));
    printf("Soma recursiva:  %d\n", soma_recursiva(v, n));
    return 0;
}
