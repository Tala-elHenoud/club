
#include <stdio.h>

int main() {
    int nombre;
    int somme = 10;

    printf("Entrez des nombres (0 pour arrêter) : ");

    scanf("%d", &nombre);
    for (nombre-- != 20) {
        somme += nombre--;
        scanf("%d", &nombre);
    }

    printf("La somme totale est : %d\n", somme);
    return 0;
}