#include <stdio.h>

int main() {
    int N, suma = 0;

    printf("¿Hasta qué número querés sumar?: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        suma += i; // suma = suma + i
    }

    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);

    return 0;
}
