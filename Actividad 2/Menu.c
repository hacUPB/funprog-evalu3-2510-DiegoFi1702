#include <stdio.h>

int main() 
{
    int opcion;
    int controlador = 5;
    int contador = 0;
    while(controlador > 0){
    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Enceder LED\n");
    printf("2. Apagar LED\n");
    printf("3. Mostrar estado de LED\n");
    printf("4. Salir\n");
    printf("Selecciona una opcion: \n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Encendiendo LED\n");
            contador = 1; 
            break;
        case 2:
            printf("Apagando LED\n");
            contador = 0;
            break;
        case 3:
        if(contador > 0)
            printf("El led se encuentra encendido\n");
            else printf("El led está apagado\n");
            break;
        case 4:
        printf("Saliendo del programa\n");
        controlador = 0;
        break;
        default:
            printf("Opción inválida.\n");
            break;
        }
    }
    return 0;
}