#include <stdio.h>

int main() {
    float parcial1, parcial2, promedio;

    // Pedir las notas
    printf("Ingrese la nota del primer parcial: ");
    scanf("%f", &parcial1);

    printf("Ingrese la nota del segundo parcial: ");
    scanf("%f", &parcial2);

    // Calcular promedio
    promedio = (parcial1 + parcial2) / 2;

    // Mostrar resultados
    printf("Promedio: %.2f\n", promedio);

    if (promedio >= 14) {
        printf("Resultado: Aprobado\n");
    } else {
        printf("Resultado: Reprobado\n");
    }

    return 0;
}

