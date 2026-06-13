/*
 * Exercício 5 - Inverter Número (recursivo)
 * Entrada: 12345  ->  Saída: 54321
 */
#include <stdio.h>

void inverter_numero(int n) {
    if (n == 0) return;
    printf("%d", n % 10);
    inverter_numero(n / 10);
}

int main() {
    int num = 12345;
    printf("Entrada: %d\n", num);
    printf("Saída:   ");
    inverter_numero(num);
    printf("\n");
    return 0;
}
