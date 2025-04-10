#include <stdio.h>

int main() {
    int x;

    printf("¿De qué número querés la tabla?: ");
    scanf("%d", &x);

    printf("\nTabla del %d:\n", x);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}
