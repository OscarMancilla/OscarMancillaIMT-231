#include <stdio.h>

int main() {
    int N;

    printf("Ingrese un número: ");
    scanf("%d", &N);

    printf("\nContando del 1 al %d:\n", N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\nListo!\n");

    return 0;
}
