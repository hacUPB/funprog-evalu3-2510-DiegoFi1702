# Para la bitácora:
#### 1. Código fuente
Es la esencia de los programas informáticos, ya que es la manera que tiene el programador de comunicarse con la maquina.
#### 2. Código objeto
Es el resultado de pasar el codigo a través del compilador, el código resultado no es capaz de ser ejecutado todavía.
#### 3. Lenguaje ensamblador
El lenguaje ensamblador es un lenguaje de bajo nivel que proporciona una interfaz simbólica de una arquitectura específica, esto ofrece buen control pero también mayor complejidad y menos portabilidad.
#### 4. Compilador
Es el que se encarga de la traducción del código fuente a un código objeto o directamente a código de manquina, de forma que esta lo pueda interpretar.
#### 5. ¿Cuál es la diferencia entre un lenguaje compilado y un lenguaje interpretado?
El lenguaje compilado se tiene que compilar para que funcione, es decir, requiere de compilador (como un traductor) mientras que el interpretado, al mismo tiempo que se dice algo, esto se traduce y ejecuta, sin necesidad del compilador.
### Actividad Práctica:
1. Preprocesado: 
Con este paso añadimos las librerías necesarias y se crea el código fuente
![Preproc](/Imagenes/A.Prac%20PREPROC.png)

2. Compilado: Aquí
![Compil](/Imagenes/A.Prac%20CodigoOb.png)

3. Ensamblaje 
![Ensam](/Imagenes/A.Prac%20ENSAM.png)

4. Linker
![EXE](/Imagenes/A.Prac%20Ejec.png)

//(Para compilar) gcc archivo.c -Wall -o Nombre del ejecutable