#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float factor_pot, potencia_ac, potencia_ap, Resultado;
    int opcion, contador_sal;
        
    printf("Bienvenido a la calculadora cientifica para el factor de potencia\n");
    printf("Porfavor elija que va a calcular\n");
    printf("1. Para potencia activa.\n");
    printf("2. Para potencia aparente.\n");
    printf("3. Para factor de potencia.\n");
    scanf("%d", &opcion);
    switch (opcion)
    {

        case 1:

        printf("Eligio potencia activa.\n");
        printf("Por favor introduzca la potencia aparente en VA.\n");
        scanf("%f", &potencia_ap);
        printf("Por favor introduzca el factor de potencia (entre 0 y 1).\n");
        scanf("%f", &factor_pot);
        Resultado = potencia_ap * factor_pot;
        printf("La potencia activa es: %f wats\n", Resultado);
        break;

        case 2:
        printf("Eligio potencia aparente.\n");
        printf("Por favor introduzca la potencia activa en wats.\n");
        scanf("%f", &potencia_ac);
        printf("Por favor introduzca el factor de potencia (entre 0 y 1)\n");
        scanf("%f", &factor_pot);
        Resultado = potencia_ac / factor_pot;
        printf("La potencia aparente es: %f VA\n", Resultado);
        break;
        
        case 3:
        printf("Eligio factor de potencia.\n");
        printf("Por favor introduzca la potencia activa.\n");
        scanf("%f", &potencia_ac);
        printf("Por favor introduzca la potencia aparente.\n");
        scanf("%f", &potencia_ap);
        Resultado = potencia_ac / potencia_ap;
        printf("El factor de potencia es: %f\n", Resultado);
        break;

        default:
        printf("Ingreso una opcion invalida");
        break;
    }
return 0;
}