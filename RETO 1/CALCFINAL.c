#include <stdio.h>
#include <math.h>

void menu(void)
{
    int opcion;
    
    printf("Bienvenido a la calculadora cientifica de Diego Fidel\n");
    printf("------------------------------------------------------\n");
    printf("Por favor elija que va a calcular\n");
    printf("1. Para ley de ohm.\n");
    printf("2. Para factor de potencia.\n");
    printf("3. Para resistencia de un conductor.\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
        printf("Eligio Ley de Ohm.\n");
        float Voltaje, Resistencia, Corriente, Resultado;
        int opcion, contador_ohm;
        
        do{
            printf("-----------------------------------------------\n");
            printf("Bienvenido a la calculadora cientifica para la ley de Ohm\n");
            printf("Por favor elija que va a calcular\n");
            printf("1. Para voltaje.\n");
            printf("2. Para corriente.\n");
            printf("3. Para resistencia.\n");
            printf("4. Para salir.\n");
            printf("5. Para ir atras.\n");
            scanf("%d", &opcion);
            contador_ohm = 0;
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
                printf("Por favor introduzca el voltaje en voltios.\n");
                scanf("%f", &Voltaje);
                printf("Por favor introduzca la corriente en amperios\n");
                scanf("%f", &Corriente);
                Resultado = Voltaje / Corriente;
                printf("La resistencia es: %f\n", Resultado);
                break;
                
                case 4:
                printf("Saliendo...\n");
                contador_ohm = 1;
                break;
        
                case 5:
                printf("-----------------------------------------------\n");
                menu();
                break;
                
                default:
                printf("Ingreso una opcion invalida\n");
                break;
            }
        }while (contador_ohm < 1);
        break;
        
        case 2:
        printf("Eligio factor de potencia.\n");
        float factor_pot, potencia_ac, potencia_ap;
        int contador_FP;
        do{
            contador_FP = 0;
            printf("Bienvenido a la calculadora cientifica para el factor de potencia\n");
            printf("Porfavor elija que va a calcular\n");
            printf("1. Para potencia activa.\n");
            printf("2. Para potencia aparente.\n");
            printf("3. Para factor de potencia.\n");
            printf("4. Para salir.\n");
            printf("5. Para ir atras.\n");
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
                case 4: 
                printf("Saliendo...");
                contador_FP = 1;
                break;
                
                case 5:
                printf("-------------------------------------------------------\n");
                menu();
                break;
                
                default:
                printf("Ingreso una opcion invalida");
                break;
            }
        }while(contador_FP < 1);
        break;
        
        case 3:
        printf("Eligio calcular la resistencia de un conductor.\n");
        float resultado, coef_temp, temp_user, temp_cons, res_temp20;
        temp_cons = 20; 
        int opciones, contador_RC;
        do{
            contador_RC = 0;
            printf("Bienvenido a la calculadora de resistencias de conductores.\n");
            printf("Ingrese 1 para oro.\n");
            printf("Ingrese 2 para aluminio.\n");
            printf("Ingrese 3 para cobre.\n");
            printf("Ingrese 4 para otros.\n");
            printf("Ingrese 5 para salir.\n");
            printf("Ingrese 6 para ir atras.\n");
            scanf("%d", &opciones);
            switch (opciones){
                
                case 1: 
                printf("Eligio oro\n");
                printf("Ingrese temperatura a la que desea calcular\n");
                scanf("%f", &temp_user);
                coef_temp = 0.0034;
                res_temp20 = 0.0235;
                resultado = temp_user - temp_cons;
                resultado = resultado * coef_temp;
                resultado = resultado + 1;
                resultado = resultado * res_temp20;
                printf("El valor de la resistencia es %f en Ohms mm^2/m\n", resultado);
                break;
                
                case 2:
                printf("Eligio aluminio\n");
                printf("Ingrese temperatura a la que desea calcular\n");
                scanf("%f", &temp_user);
                coef_temp = 0.0040;
                res_temp20 = 0.0265;
                resultado = temp_user - temp_cons;
                resultado = resultado * coef_temp;
                resultado = resultado + 1;
                resultado = resultado * res_temp20;
                printf("El valor de la resistencia es %f en Ohms mm^2/m\n", resultado);
                break;
                
                case 3: 
                printf("Eligio cobre\n");
                printf("Ingrese temperatura a la que desea calcular\n");
                scanf("%f", &temp_user);
                coef_temp = 0.0039;
                res_temp20 = 0.0168;
                resultado = temp_user - temp_cons;
                resultado = resultado * coef_temp;
                resultado = resultado + 1;
                resultado = resultado * res_temp20;
                printf("El valor de la resistencia es %f en Ohms mm^2/m\n", resultado);
                break;   
                
                case 4: 
                printf("Eligio otros\n");
                printf("Por favor ingrese el coeficiente de temperatura\n");
                scanf("%f", &coef_temp);
                printf("Por favor ingrese la resistividad a los 20° en notacion decimal y ohms mm^2/m\n");
                scanf("%f", &res_temp20);
                printf("Ingresela temperatura a la que desea calcular\n");
                scanf("%f", &temp_user);
                resultado = temp_user - temp_cons;
                resultado = resultado * coef_temp;
                resultado = resultado + 1;
                resultado = resultado * res_temp20;
                printf("El valor de la resistencia es %f en Ohms mm^2/m\n", resultado);
                break;

                case 5:    
                printf("Saliendo...\n");
                contador_RC = 1;
                case 6:
                menu();
                printf("-------------------------------------------------------------------\n");
                break;

                default:
                printf("Selecciono una opcion invalida.\n");
                break;
            }
        }while(contador_RC < 1);
        break;
            
        default:
        printf("Ingreso una opcion invalida\n");   
        break;
    }
}

int main(void){
    menu();
    return 0; 
}