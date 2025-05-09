#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float resultado, const_1, coef_temp, temp_user, temp_cons, res_temp20;
    const_1 = 1, temp_cons = 20;  
    int opciones;
    printf("Bienvenido a la calculadora de resistencias de conductores\n");
    printf("Ingrese 1 para oro\n");
    printf("Ingrese 2 para aluminio\n");
    printf("Ingrese 3 para cobre\n");
    printf("Ingrese 4 para otros\n");
    printf("Ingrese 5 para salir\n");
    scanf("%d", &opciones);

    switch (opciones)
    {
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

    default:
    printf("Selecciono una opcion invalida.\n");
        break;
    }
    
    return 0;
}