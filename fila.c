/*
 * fila.c
 *
 *  Created on: 4 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include "fila.h"

void criar(Fila *f) {
	f->fim = 0;
	f->inicio = 0;
	f->total = 0;
}

void inserir(Fila *f, int elemento) {
	f->valores[f->fim] = elemento;
	//de 1 a 9, todo o resto da divisao por 10, é o proprio numero, quando quando sair do da ultimo indice(9) o fim vota para o inico(0)
	f->fim = (f->fim + 1) % 10;
	f->total++;
}
int isEmpty(Fila f) {
	return (f.total == 0);
}
int isFull(Fila f) {
	return (f.total == 10);
}
int retirar(Fila *f) {
	int elemento = f->valores[f->inicio];
	f->inicio = (f->inicio + 1) % 10;
	f->total--;
	return elemento;
}

