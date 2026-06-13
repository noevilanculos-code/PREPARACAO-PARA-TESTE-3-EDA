/*
 * Exercício 15 - Completar a Função Fibonacci
 *
 * A linha adicionada foi: return fibonacci(n-1) + fibonacci(n-2);
 * Segue a definição matemática: F(n) = F(n-1) + F(n-2)
 */
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  /* completado */
}

int main() {
    printf("Sequência de Fibonacci (0 a 10):\n");
    for (int i = 0; i <= 10; i++)
        printf("  fib(%2d) = %d\n", i, fibonacci(i));
    return 0;
}
