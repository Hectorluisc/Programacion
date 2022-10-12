//problema 2.9
#include<stdio.h>
#include<math.h>

int main(){
	
	int R, T, Q;           //variables a utilizar
	float Resul;
	printf("Un programa que el resultado sea menor a 820.\n"); //Lo que se pide
	
	printf("Ingrese su valor R: "); scanf("%i",&R);       //valor de la variable R
	
	printf("Ingrese su valor T: "); scanf("%i",&T);       //valor a la variable T
	
	printf("Ingrese su valor Q: "); scanf("%i",&Q);       //valor a la variable Q
	
    Resul = pow(R,4) - pow(T,3) + 4 * pow(Q,2);           //formula que da el problema

    printf("El resultado total es: %2.f",Resul);          //pidiendo mostrar el resultado de esa formula
	
	if(Resul < 820){
		printf("\nLos valores de R, T y Q son: %i, %i, %i",R, T, Q);     //condicion de que el resultado sea menor a 820
	}
	else{
		printf("\nHa pasado la cantidad indicada");            //caso contrario me diga este mensaje
	}
	
	
	return 0;
}
