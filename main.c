#include <stdio.h>

int main(void) {
    int numero;
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    printf("i fattori primi di %d sono:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
