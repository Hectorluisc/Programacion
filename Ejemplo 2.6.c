/*Ejemplo 2.6
Construye un diagrama de flujo y el correspondiente programa en C que, al recibir
como datos el nivel académico de un profesor de una universidad así como su
salario, incremente este último siguiendo las especificaciones de la tabla 2.3 e
imprima tanto el nivel del profesor como su nuevo salario.*/

#include<stdio.h>

int main (){
	
	int nivel;
	float salario;
	
	printf("Ingrese su nivel academico: ");scanf("%i",&nivel);
	printf("Ingrese su salario: ");scanf("%f",&salario);
	
	switch(nivel){
		case 1: salario = salario * 0.035; break;
		 printf ("\nSu nivel es %i, \tsu salario aumento a: %.f",nivel,salario);
		case 2: salario = salario * 0.041; break;
		 printf ("\nSu nivel es %i, \tsu salario aumento a: %.f",nivel,salario);
		case 3: salario = salario * 0.048; break;
		 printf ("\nSu nivel es %i, \tsu salario aumento a: %.f",nivel,salario);
		case 4: salario = salario * 0.053; break;
		 printf ("\nSu nivel es %i, \tsu salario aumento a: %.f",nivel,salario);
	}
    
    printf ("\nSu nivel es %i, \tsu salario aumento a: %.f",nivel,salario);
	
	
	
	return 0;
}
