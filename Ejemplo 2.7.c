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
	     	printf("El orden es a, b, c: %i, %i, y %i",a, b, c);
	    	      }
	      else 
	        printf("El orden es a, c, b: %i, %i y %i",a, c, b);
	      
		  else
		    printf("El orden es c, a, b: %i, %i y %i",c, a, b);
	
	else 
		if(b > c)
		  if (a > c)
		   printf("El orden es b, a, c: %i, %i y %i",b, a, c);
		
		else
		   printf("El orden es b, c, a: %i, %i y %i",b, c, a);
		
		else
		   printf("el orden es c, b, a %i, %i y %i",c, b, a);   
		   	  
	
	
	
	
	return 0;
}
