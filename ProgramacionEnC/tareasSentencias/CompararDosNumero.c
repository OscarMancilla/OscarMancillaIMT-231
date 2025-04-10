#include <stdio.h>

int main() {
	int num1;
	int num2;
	printf("ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("ingrese el segundo numero: ");
	scanf("%d", &num2);
	if (num1>num2) {
        	printf("El numero mayor es:. %d \n", num1);
    	}
	if(num1<num2){
                printf("El numero mayor es:. %d \n", num2);
        }

	else {
		printf("los numeros son iguales.\n");
	}
	return 0;


}
