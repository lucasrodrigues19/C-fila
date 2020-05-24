/*
 * main.c
 *
 *  Created on: 4 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include <stdio.h>
#include "fila.h"

int main() {

	int valor;
	Fila f;
	criar(&f);
	char rsp;

	while (!isFull(f)) {

		printf("\nInserir valor: ");
		scanf("%d", &valor);
		inserir(&f, valor);
		printf("\nContinuar [s/n]? ");
		scanf("%c", &rsp);
		scanf("%c", &rsp);
		if(rsp == 'n')
			break;
	}
	printf("\n---------------------\n");
	while(!isEmpty(f)){
		valor = retirar(&f);
		printf(" | %d",valor);
	}
	printf("\n---------------------\n");
	return 0;
}
