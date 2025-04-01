//Una variable llamada promedio, la función calcula el promedio de los 3 numeros y escribe el resultado utilizando el puntero.
// El promedio se imprime en la función principal.
// gcc funciones.c -Wall -lm -o funciones

#include <stdio.h>
#include <math.h>

void promedio(float, float, float, float*); //prototipo de func

int main(int argc, char const *argv[])
{
    float num1, num2, num3, resultado;
    printf("Ingrese dato 1\n");
    scanf("%f", &num1);
    printf("Ingrese dato 2\n");
    scanf("%f", &num2);
    printf("Ingrese dato 3\n");
    scanf("%f", &num3);
    
    promedio(num1, num2, num3, &resultado);
    printf("El promedio de sus numeros es: %f\n", resultado);
    return 0; 
}

void promedio(float dato1, float dato2, float dato3, float *resultado)
{
    (*resultado) = (dato1 + dato2 + dato3) / 3.0;

}