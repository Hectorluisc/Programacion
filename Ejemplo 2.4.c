//Ejemplo 2.2

#include<stdio.h>

int main(){
	
	float precio, incre1, incre2;
	
	printf("Ingrese el valor del producto: ");
	scanf("%f",&precio);
	
	incre1 = precio * 1.11;
	incre2 = precio * 1.08;
	
	if (precio < 1500){
		printf("El valor del producto ha incrementado a: %.f",incre1);
	}
	else{
		printf("El valor del producto ha incrementado a: %.f",incre2);
	}
	
	
	return 0;
}
