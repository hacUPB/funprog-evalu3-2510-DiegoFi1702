    #include <stdio.h>

    int main(int argc, char const *argv[])
    {
        float Voltaje, Resistencia, Corriente, Resultado;
        int opcion;
        
        printf("Bienvenido a la calculadora cientifica para la ley de Ohm\n");
        printf("Porfavor elija que va a calcular\n");
        printf("1. Para voltaje.\n");
        printf("2. Para corriente.\n");
        printf("3. Para resistencia.\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        printf("Eligio voltaje.\n");
        printf("Por favor introduzca la corriente en amperios\n");
        scanf("%f", &Corriente);
        printf("Por favor introduzca la resistencia en ohmios.\n");
        scanf("%f", &Resistencia);
        Resultado = Corriente * Resistencia;
        printf("El voltaje es: %f\n", Resultado);
            break;
        
            case 2:
        printf("Eligio corriente.");
        printf("Por favor introduzca el voltaje en voltios\n");
        scanf("%f", &Voltaje);
        printf("Por favor introduzca la resistencia en ohmios.\n");
        scanf("%f", &Resistencia);
        Resultado = Voltaje / Resistencia;
        printf("La corriente es: %f\n", Resultado);
        break;
        
        case 3:
        printf("Eligio resistencia.");
        printf("Por favor introduzca la resistencia en ohmios.\n");
        scanf("%f", &Resistencia);
        printf("Por favor introduzca la corriente en amperios\n");
        scanf("%f", &Corriente);
        Resultado = Resistencia / Corriente;
        printf("La corriente es: %f\n", Resultado);
        break;

        default:
        printf("Ingreso una opcion invalida");
            break;
        }
    return 0;
    }
