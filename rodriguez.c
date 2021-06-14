#include <pthread.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(char argc,char *parametros_comando[]) {

char* posicionesIniciales[]={"0|0","0|0","0|0","0|0","0|0"};
			//int cantidadPos = sizeof(posicionesIniciales);



// 0|0 + /0 = 5    ---> 20
int cantidadPos = sizeof(posicionesIniciales) / sizeof(*posicionesIniciales);

//int i=2;
//	while (parametros_comando[i]!=NULL){
	//	posicionesIniciales[i-2]=parametros_comando[i];
	//	i++;
//	}

int  cantidadPosLista = sizeof(parametros_comando[3]) / sizeof(*parametros_comando[3]);

int res1= sizeof(parametros_comando[3]);
int res2 = sizeof(*parametros_comando[3]);



printf("La cantidad de tripulantes: %s  \n", parametros_comando[1]);
printf("El archivo: %s  \n", parametros_comando[2]);
printf("La lista: %s  \n", parametros_comando[3]);

printf("La cantidad es: %d  \n", cantidadPos);

printf("La cantidad de la lista: %d  \n", cantidadPosLista);



printf("res1: %d \n", res1);
printf("res2: %d \n", res2);


	return 0;
}
