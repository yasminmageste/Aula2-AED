#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *dados;
    int tamanho;
    int capacidade;
} VetorDinamico;

//Implementa: inicializar, push_back, pop_back, size, destruir

void inicializar(VetorDinamico *v) {
 v->capacidade = 8; // Capacidade inicial
 v->tamanho = 0;
 v->dados = (int*)malloc(v->capacidade * sizeof(int));
}

//adicionar elemento ao final
void push_back(VetorDinamico *v, int valor) {
 // Se cheio, dobra a capacidade
 if (v->tamanho >= v->capacidade) {
 v->capacidade *= 2;
 v->dados = (int*)realloc(v->dados, v->capacidade * sizeof(int));
 }
 v->dados[v->tamanho++] = valor;
}

// Remover último elemento
int pop_back(VetorDinamico *v) {
 if (v->tamanho <= 0) return -1; // Erro
 return v->dados[--v->tamanho];
}

// Obter tamanho atual
int size(VetorDinamico *v) {
 return v->tamanho;
}

// Liberar memória
void destruir(VetorDinamico *v) {
 free(v->dados);
 v->dados = NULL;
 v->tamanho = v->capacidade = 0;
}

int main() {
    VetorDinamico vetor;
    inicializar(&vetor);

    for (int i = 1; i<=100; i++) {
        push_back(&vetor, i);

        //mostrar evolução da capacidade a cada 10 inserções
        if (i % 10 == 0) {
    printf("Apos %d insercoes: tamanho=%d, capacidade=%d\n", i, size(&vetor), vetor.capacidade);
 }
    }
}