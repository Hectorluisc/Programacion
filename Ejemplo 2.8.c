//Ejemplo 2.8
#include<stdio.h>
int main (){
{
int MAT, CAR, SEM;  //declarando variables de tipo entero
float PRO;         //variable de tipo flotante 
printf("Ingrese matrícula: ");  scanf("%d", &MAT);

printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica) :" ); scanf("%d", &CAR);   
                                                             
printf("Ingrese semestre: "); scanf("%d", &SEM);

printf("Ingrese promedio: "); scanf("%f", &PRO);

switch(CAR)           //usando la sentencia switch
{
case 1: if (SEM >= 6 && PRO >= 8.5)         //caso 1 para la materia de industrial
printf("\n%d %d %5.2f", MAT, CAR, PRO);
break;
case 2: if (SEM >= 5 && PRO >= 9.0)         //caso 2 para la materia de telematica
printf("\n%d %d %5.2f", MAT, CAR, PRO);
break;
case 3: if (SEM >= 6 && PRO >= 8.8)         //caso 3 para la materia de computacion 
printf("\n%d %d %5.2f", MAT, CAR, PRO);
break;
case 4: if (SEM >= 7 && PRO >= 9.0)         //caso 4 para la materia de mecanica
printf("\n%d %d %5.2f", MAT, CAR, PRO);
break;
default: printf("\n Error en la carrera");  /*en caso de que el numero de las materias no sea correcto nos
                                             dara este mensaje*/
break;
}
}
return 0;
}
	
	
	
	
	
	

