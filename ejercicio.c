#include <stdio.h>

int main() {
    float parcial1, parcial2, promedio;

    do {
        printf("Ingrese la nota del primer parcial (0 - 20): ");
        scanf("%f", &parcial1);
        if (parcial1 < 0 || parcial1 > 20) {
            printf("Error: la nota debe estar entre 0 y 20.\n");
        }
    } while (parcial1 < 0 || parcial1 > 20);

    do {
        printf("Ingrese la nota del segundo parcial (0 - 20): ");
        scanf("%f", &parcial2);
        if (parcial2 < 0 || parcial2 > 20) {
            printf("Error: la nota debe estar entre 0 y 20.\n");
        }
    } while (parcial2 < 0 || parcial2 > 20);

    promedio = (parcial1 + parcial2) / 2;

    printf("Promedio: %.2f\n", promedio);

    if (promedio >= 7) {
        printf("Resultado: Aprobado\n");
    } else {
        printf("Resultado: Reprobado\n");
    }

    return 0;
}

