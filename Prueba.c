#include <stdio.h>
#include <math.h>

//Función que recibe dos punteros y realiza operaciones con ellos
void operacion_punteros(float*, double*); //Los punteros a la hora de ser escritos como parametros deben llevar asterisco al final.

int main (int argc, char const *argv[])
{
 float cubo;
 double coseno; 
 operacion_punteros(&cubo, &coseno);
 printf("Cubo = %f\n", cubo);
 printf("Coseno = %lf\n", coseno);

   return 0;
}

//definición de la función
void operacion_punteros(float *var1, double *var2)
{
 //En la variable a la que apunta var 1 voy a guardar el cubo de un numero
 //que ingresa el usuario y en la var 2 el factorial.
 float dato; 

 printf("Ingrese un numero\n");
 scanf("%f", &dato);
 (*var1) = pow(dato, 3); //Envia el dato operado a la variable cubo.
 (*var2) = cos(dato); //Guarda en la variable coseno = cos(dato)
}
