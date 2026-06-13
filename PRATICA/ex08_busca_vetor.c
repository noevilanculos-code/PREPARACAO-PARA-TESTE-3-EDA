/*
 * Exercício 8 - Busca Linear em Vetor
 * Duas versões: iterativa e recursiva
 * Retorna a posição do elemento ou -1 se não encontrado
 */
#include <stdio.h>

int busca_iterativa(int v[], int n, int chave) {
    for (int i = 0; i < n; i++)
        if (v[i] == chave) return i;
    return -1;
}

int busca_recursiva(int v[], int n, int chave, int i) {
    if (i >= n) return -1;
    if (v[i] == chave) return i;
    return busca_recursiva(v, n, chave, i + 1);
}

int main() {
    int v[] = {10, 25, 3, 47, 8};
    int n = 5;
    int chave;

    printf("Vetor: {10, 25, 3, 47, 8}\n\n");

    chave = 47;
    printf("Busca por %d:\n", chave);
    printf("  Iterativa: posição %d\n", busca_iterativa(v, n, chave));
    printf("  Recursiva: posição %d\n", busca_recursiva(v, n, chave, 0));

    chave = 99;
    printf("Busca por %d:\n", chave);
    printf("  Iterativa: posição %d (não encontrado)\n", busca_iterativa(v, n, chave));
    printf("  Recursiva: posição %d (não encontrado)\n", busca_recursiva(v, n, chave, 0));
    return 0;
}
