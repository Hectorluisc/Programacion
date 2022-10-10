//Ejemplo 2.2

#include<stdio.h>

int main(){
	
	float precio, incre;
	
	printf("Ingrese el valor del producto: ");
	scanf("%f",&precio);
	
	incre = precio * 1.11;
	
	if (precio < 1500){
		printf("El valor del producto a incrementado a: %.f",incre);
	}
	
	
	return 0;
}
