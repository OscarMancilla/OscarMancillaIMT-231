#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    int original = numero; // para mostrar el número después

    if (numero == 0) {
        contador = 1;
    } else {
        while (numero != 0) {
            numero = numero / 10;
            contador++;
        }
    }

    printf("El número %d tiene %d dígito(s).\n", original, contador);

    return 0;
}
