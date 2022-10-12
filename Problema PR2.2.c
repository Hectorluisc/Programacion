//problema PR2.2
#include<stdio.h>
#include<math.h>
int main(){
	
	int NUM;      //la variable a utilizar
	
	printf("Ingrese su numero: "); scanf("%i",&NUM);    //pidiendo un numero
	
	if(NUM == 0){             
		printf("El numero es nulo");   //condicion si el numero es = 0 me dara este mensaje
	}
	else                          //formula para saber si es par o impar
	    if(pow(-1, NUM) > 0)
	    printf("El numero es par");
	    
	    else
	    printf("El numero es impar");
	
	
	
	return 0;
}
