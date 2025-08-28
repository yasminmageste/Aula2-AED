#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
 int tmp = *a;
 *a = *b;
 *b = tmp;
}
int main() {
 int x = 5, y = 10;
 printf("Antes: x = %d, y = %d\n", x, y);
 swap(&x, &y);
 printf("Depois: x = %d, y = %d\n", x, y);
 return 0;
}