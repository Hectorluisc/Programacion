//Ejemplo 2.3

#include <stdio.h>
int main (){
	
	int nota;
	printf("Ingrese su promedio: ");
	scanf("%i",&nota);
	
	if (nota>=6){
		printf("Usted ha aprobado.");
	}
	else{
		printf("Usted ha reprobado.");
	}
	
	
	return 0;
}
