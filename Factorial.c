#include <stdio.h>
/* Universidad Nacional Autónoma de México
        Alumno: García Romero Misael
        "Fundamentos de programacion"
                  Grupo: 15
  */
  
//Este programa obtiene el factorial de un numero

int main() {
	int Ac; //Acumulador
	int NUM; //Numero recibido
	int FAC=1; //Factorial
	 
	printf("Ingrese un numero al que desee obtener su factorial\n");
    scanf("%d", &NUM);
	    
		while (NUM<=0)  {
	        printf("Debe ingresar un numero positivo\n");
	        	printf("Ingrese un numero al que desee obtener su factorial\n");
	                scanf("%d", &NUM);  
	    }
		    if (NUM>0){ 
				for(Ac=1;Ac<=NUM;Ac++){
	                FAC*=Ac;
	            }
	        }
		
    printf ("\n El factorial del numero dado es: %d", FAC);	
	return 0;
}
