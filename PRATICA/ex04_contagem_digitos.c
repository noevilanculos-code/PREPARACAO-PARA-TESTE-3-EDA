/*
 * Exercício 4 - Contagem de Dígitos
 * Duas versões: iterativa e recursiva
 */
#include <stdio.h>

int contar_digitos_iterativo(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n > 0) { count++; n /= 10; }
    return count;
}

int contar_digitos_recursivo(int n) {
    if (n < 10) return 1;
    return 1 + contar_digitos_recursivo(n / 10);
}

int main() {
    int nums[] = {0, 5, 42, 1000, 99999};
    int tam = 5;
    printf("%-8s %-10s %-10s\n", "Número", "Iterativo", "Recursivo");
    for (int i = 0; i < tam; i++)
        printf("%-8d %-10d %-10d\n",
               nums[i],
               contar_digitos_iterativo(nums[i]),
               contar_digitos_recursivo(nums[i]));
    return 0;
}
