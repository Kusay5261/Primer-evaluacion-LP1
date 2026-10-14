/*

Realive un programa que lea los tres lados de un triangulo e indique si es equilatero(tres lado iguales),
isosceles(dos lados iguales) o escaleno(tres lados distintos).

*/
#include<stdio.h>

int main(){
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	
	printf("Ingrese el valor del lado 1: \n");
	scanf("%d", &lado1);
	printf("Ingrese el valor del lado 2: \n");
	scanf("%d", &lado2);
	printf("Ingrese el valor del lado 3: \n");
	scanf("%d", &lado3);
	
	if (lado1 == lado2 && lado2 == lado3){
		printf("El triangulo es Equilatero \n");
	}else if((lado1 == lado2 && lado2 != lado3) || (lado1 == lado3 && lado2 != lado1) || (lado2 == lado3 && lado1 != lado3)){
		printf("El triangulo es Isosceles \n");
	}else{
		printf("El triangulo es Escaleno \n");
	}
}