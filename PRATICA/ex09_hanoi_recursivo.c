/*
 * Exercício 9 - Torre de Hanoi (recursivo)
 * Imprime todos os movimentos para n discos
 */
#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("  Mover disco 1: %c --> %c\n", origem, destino);
        return;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("  Mover disco %d: %c --> %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n = 3;
    printf("Torre de Hanoi com %d discos:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
