//Codigo register.c modificado

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* argv[0] es el nombre del programa
* argv[1] es el numero de iteraciones
* argv[2] opcion de creacion de la variable n
*	- 0: int n = 0
*	- 1: register int n = 0
* 
**/

int main(int argc, char* argv[]){
	if (argc!=3){
		printf("Forma de uso: %s ValorLong  ModoEjecucion\n", argv[0]);
		return -1;
	}
	
	long max = atol(argv[1]);
	int op = atol(argv[2]);
	clock_t t;

	//Manejo de opciones para la creacion de la variable 'n'
	if (op == 0){
		int n = 0;
		//Calcula el tiempo de ejecucion 
		t = clock();
		printf("Inicio\n");
		for (n = 0; n<max; n++);
	}else if (op == 1){
		register int n = 0;
		//Calcula el tiempo de ejecucion 
		t = clock();
		printf("Inicio\n");
		for (n = 0; n<max; n++);
	}
	
	printf("Fin\n");
	t = clock() - t;
	double tiempo = ((double)t)/CLOCKS_PER_SEC; //Tiempo transcurrido en segundos
	printf("Tiempo transcurrido: %f segundos\n",tiempo);
	
	return 0;
}
