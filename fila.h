/*
 * fila.h
 *
 *  Created on: 4 de mai de 2020
 *      Author: lucas.rodrigues
 */

#ifndef FILA_H_
#define FILA_H_

#endif /* FILA_H_ */

typedef struct objeto {
	int fim;
	int inicio;
	int total;
	int valores[10];

} Fila;
void criar(Fila *f);
void inserir(Fila *f, int elemento);
int isEmpty(Fila f);
int isFull(Fila f);
int retirar(Fila *f);
