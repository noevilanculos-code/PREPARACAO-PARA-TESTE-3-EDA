/*
 * Exercício 3 - Maior Elemento de um Vetor
 * Duas versões: iterativa e recursiva
 */
#include <stdio.h>

int maior_iterativo(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > maior)
            maior = v[i];
    return maior;
}

int maior_recursivo(int v[], int n) {
    if (n == 1) return v[0];
    int sub = maior_recursivo(v, n - 1);
    return (v[n - 1] > sub) ? v[n - 1] : sub;
}

void testar(int v[], int n) {
    printf("Maior iterativo: %d\n", maior_iterativo(v, n));
    printf("Maior recursivo: %d\n", maior_recursivo(v, n));
}

int main() {
    int v1[] = {3, 7, 1, 9, 4};
    int v2[] = {10, 20, 30};
    int v3[] = {100, 50, 75, 25, 90};

    printf("--- Vetor {3,7,1,9,4} ---\n");      testar(v1, 5);
    printf("--- Vetor {10,20,30} ---\n");         testar(v2, 3);
    printf("--- Vetor {100,50,75,25,90} ---\n"); testar(v3, 5);
    return 0;
}
