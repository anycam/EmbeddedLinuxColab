#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limite;

    printf("Introduce the límit for the sequence of prime numbers: ");
    scanf("%d", &limite);

    printf("\nPrime numbers up to %d:\n", limite);
    for (int i = 2; i <= limite; i++) {
        if (es_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
