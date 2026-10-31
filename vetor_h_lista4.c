#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;


Vetor *vetor_criar(void);
void append(Vetor *v, int valor);
void show(Vetor *v);
Vetor *slice(Vetor *v, int x0, int x1);
void pop(Vetor *v);
void vetor_destruir(Vetor *v);

#endif