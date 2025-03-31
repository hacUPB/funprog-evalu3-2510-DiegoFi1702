#include <stdio.h>

int main(int argc, char const *argv[])
{
  float num1, num2, resultado;
  char operador;
  do
  {
    printf("Ingrese un numero, luego el operador y luego el segundo numero");
    printf("Operaciones disponibles:\n+ \n- \n* \n/ \n");
    printf("Ingrese ? para salir\n");
    
    scanf("%f", &num1);
    setbuf(stdin, NULL);
    scanf("%c", &operador);
    scanf("%f", &num2);

    switch (operador)
    {
    case '+':
        resultado = num1 - num2;
        break;
    case '-':
        resultado = num1 - num2; 
        break;

    case '*':
        resultado = num1 * num2;
        break;

    case '/':
        resultado = num1 / num2;
        break;
    default:
        printf("Operación no válida\n");
        break;
    }
     printf("%f\n", resultado);
    }while (operador != '?');

return 0;
}
