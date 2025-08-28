# include <stdio.h>
# include <stdio.h>

int main () {
    int n, i, soma=0;
    float media;
    int *vetor;

    printf("dgite o tamanho do vetor:\n");
    scanf("%d", &n);

    //alocacao dinamica

    vetor = (int*)malloc(n*sizeof(int));
    if (vetor == NULL){
        printf('n alocou n :c\n');
        return 1;
    }

     // Preenchimento do vetor
    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = (float)soma / n;
    printf("Soma: %d\nMedia: %.2f\n", soma, media);
    // Liberação da memória
    free(vetor);
    vetor = NULL;
    return 0;
}
