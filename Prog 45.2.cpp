/* Autor: Xavier Romero Hernández, Realizado: 09/05/2022 
	Hacer un programa que pida el nombre de un archivo e imprima su contenido en pantalla
	Imprimiendo bloques de caracteres (buffer)
	*/
	
#include "milibreria.h"
#include <stdio.h>
#define MAX_BUFFER 20

int main(){
	char nombre[50], buffer[MAX_BUFFER];
	FILE *f;
	int n=0;
	
	leers("Nombre del archivo: ",nombre,50);
	f=fopen(nombre,"r");
	if(f==NULL){
		printf("Error al tratar de abri el archivo\n");
	}
	else{
		while(fgets(buffer,MAX_BUFFER,f)!=NULL){
			printf("%s",buffer);
			n++;
		}
		fclose(f);
		printf("\n---------->Para mostrar el archivo se hicieron %d accesos\n",n);
	
	}
	
	return 0;
}
