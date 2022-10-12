//Ejemplo 2.1

#include <stdio.h>
int main (){
	
	int nota;   //variable
	printf("Ingrese su promedio: ");    //ingresar dato
	scanf("%i",&nota);       //guardando ese dato
	
	if (nota>=6){            //condicion de saber si se aprobo la materia
		printf("Usted ha aprobado la materia.");
	}

	return 0;
}
