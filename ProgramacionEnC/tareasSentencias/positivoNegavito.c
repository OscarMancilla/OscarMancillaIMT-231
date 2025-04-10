#include <stdio.h>

int main() {
        int num;
        printf("ingrese un numero: ");
        scanf("%d", &num);
        if (num>0) {
                printf("El numero %d, %s\n", num , "es positivo");
        }
        if(num<0){
                printf("El numero %d, %s\n", num , "es negativo");
        }

        else {
                printf("El numero es igual a 0\n");
        }
        return 0;
}
