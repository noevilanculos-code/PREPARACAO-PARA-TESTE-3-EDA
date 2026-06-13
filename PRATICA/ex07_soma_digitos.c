/*
 * Exercício 7 - Soma dos Dígitos (recursivo)
 * Entrada: 254  ->  Saída: 11
 */
#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    printf("soma_digitos(254) = %d\n", soma_digitos(254));
    printf("soma_digitos(999) = %d\n", soma_digitos(999));
    printf("soma_digitos(100) = %d\n", soma_digitos(100));
    return 0;
}
