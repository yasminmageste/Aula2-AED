# include <stdio.h>
# include <stdlib.h>

int main() {
    int numero = 42;
    int*ponteiro = &numero;

    printf("Valor da variavel: %d\n", *ponteiro);
    printf("Endereco da variavel: %p\n", ponteiro);

    return 0;
}