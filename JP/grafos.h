#ifndef GRAFOS_H
#define GRAFOS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct grafos
{
    int n_vertices;
    int graus_max;
    int eh_ponderado;
    int *graus;
    int **arestas;
    float **pesos;
} Grafo;

Grafo *cria_grafo(int n_vertices, int graus_max, int eh_ponderado);
int insere_aresta(Grafo *gr, int orig, int dest, int eh_digrafo, float peso);
int remove_aresta(Grafo *gr, int orig, int dest, int eh_digrafo);
void libera_grafo(Grafo *gr);

#endif