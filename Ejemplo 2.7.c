//Ejemplo 2.7
#include <stdio.h>
int main(){
	int a, b, c;
	
	printf("Ingrese el precio del primer vendedor: ");scanf("%i",&a);
	printf("Ingrese el precio del segundo vendedor: ");scanf("%i",&b);
	printf("Ingrese el precio del tercer vendedor: ");scanf("%i",&c);
	
	if(a > b)
	  if(a > c)
	     if(b > c){
	     	printf("El orden es a, b, c: %i %i %i",a, b, c);
	     else
		    printf("El orden es a, c, d: %i %i %i",a, c, d);
		else 
		    printf("El orden es c, a, b: %i %i %i",c, a, b);		
		 }
	
	
	
	
	
	return 0;
}
