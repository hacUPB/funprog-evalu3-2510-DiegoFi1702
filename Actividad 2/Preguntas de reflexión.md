## Preguntas de reflexión
Mi manera de crear un menu repetitivo, que pregunte siempre que quieres hacer hasta que elijas la opción salir, consistió en crear una variable, la cual llamaremos "controlador". Después de eso, creamos un bucle con "While" y hacemos que la condición sea que "controlador" no pueda ser cero, y haremos que cuando se seleccione la opción salir la variable controlador se convierta en 0, finalizando el bucle.
````
Ejemplo en código: 
#include <stdio.h>

int main()
{
    int opcion;
    int controlador = 1;
    
    while(controlador > 0)
    {
        printf("=== MENU PRINCIPAL ===\n");
        printf("1. Ver datos de sensores\n");
        printf("2. Configurar parámetros\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion)
        {
        case 1:
            printf("Mostrando datos de sensores...\n");
            break;
        case 2:
            printf("Entrando a configuración...\n");
            break;
        case 3:
            printf("Saliendo del programa...\n");
            controlador = 0;
            break;
        default:
            printf("Opción inválida.\n");
            break;
            }
    }
    return 0;
}