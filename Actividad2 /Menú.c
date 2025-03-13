#include <stdio.h>

int main() {
    int opcion;

    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Ver datos de sensores\n");
    printf("2. Configurar parámetros\n");
    printf("3. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Mostrando datos de sensores...\n");
            break;
        case 2:
            printf("Entrando a configuración...\n");
            break;
        case 3:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }

    return 0;
}
