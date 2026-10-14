/*

Realice un programa que lea tres numeros enteros y muestre cuales el mayor y cual es el menor.

*/

#include<stdio.h>

int main(){
	
	int Valor1 = 0;
	int Valor2 = 0;
	int Valor3 = 0;
	
	printf("Ingrese el primer valor: \n");
	scanf("%d", &Valor1);
	printf("Ingrese el segundo valor: \n");
	scanf("%d", &Valor2);
	printf("Ingrese el tercer valor: \n");
	scanf("%d", &Valor3);
	
	if ((Valor1 > Valor2 && Valor1 > Valor3)){
		printf("El numero mayor es: %d \n", Valor1);
		printf("El numero mayor es: %d \n", Valor2);
	}else{
		printf("El numero mayor es: %d \n", Valor3);
	}
	
}