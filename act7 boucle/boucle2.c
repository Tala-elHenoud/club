#include <stdio.h>

int main() {
    int nombre, i;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (i = 21; i <= 25; i++) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}