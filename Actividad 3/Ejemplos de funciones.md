Ejemplo simple de funciones:
````
#include <stdio.h>
void texto(); //Prototipo
int main()
{
    texto(); //llamada de la función

    return 0;
}
// declaración de la función.
void texto(){
    printf("Hola\n");
}
````
Función con condicional:
````
#include <stdio.h>
void texto();
void texto2();
int num1, num2, total;
int main()
{
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    total = num1 + num2;
    
    if(total == 1){
        texto();
        
    }
        else
        texto2();
    

    return 0;
}

 
void texto(){
    printf("Hola\n");
}
void texto2(){
    printf("si");
}
````