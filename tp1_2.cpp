#include <stdio.h>
#include <stdlib.h>

// declaracion de funciones
int cuadrado(int n);          // funcion que devuelva el cuadrado de un número
void cuadradoVoid(int n);     // función anterior, pero devolviendo un tipo void
void mostrar(int *var);       // funcion que Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void invertir(int a, int b);  // Dado dos parámetros de entrada, deberá invertir los valores entre ambos.void invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el valor de a
void ordenar(int a, int b);   // Dado dos parámetros de entrada, deberá devolverlos de forma ordenada,en el primer parámetro el menor y en el segundo el mayor
int main() {
    // declaracion de variables
    int n, a, b;

    // lectura de datos
    printf("Ingrese un numero entero para calcularle su cuadrado\n");
    scanf("%d", &n);

    printf("Ingrese un numero entero 'A'\n");
    scanf("%d", &a);

    printf("Ingrese un numero entero 'B'\n");
    scanf("%d", &b);

    printf("Ejercicio 2.a \n");
    int c = cuadrado(n);                                             // llamado de funcion
    printf("El cuadrado del Numero ingresado %d es : %d \n", n, c);  //
    cuadradoVoid(n);

    int var = 13;
    mostrar(&var);
    printf("Ejercicio 2.d\n");
    invertir(a, b);
    printf("Ejercicio 2.e\n");
    ordenar(a, b);
    printf("Ejercicio 2.f\n");

    ordenar(9, 1);
    ordenar(8, 0);
    ordenar(7, 2);
    ordenar(4, 5);

    return 0;
}
int cuadrado(int n) {
    int a = n * n;
    return a;
}

void cuadradoVoid(int n) {
    int a = n * n;
    printf("Ejercicio 2.b\n");
    printf("El cuadrado del Numero ingresado (funcion void) %d es : %d \n", n, a);
}

void mostrar(int *var) {
    printf("Ejercicio 2.c\n");
    printf("La direccion de memoria de la variable %d es %p \n", *var, var);
    printf("El contenido de la variable es %d \n", *var);
}

void invertir(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
    printf("El valor de la variable A antes de invertir es %d \n", a);
    printf("El valor de la variable B antes de invertir es %d \n", b);
    printf("El valor de la variable A despues de invertir es %d \n", a);
    printf("El valor de la variable B despues de invertir es %d \n", b);
}

void ordenar(int a, int b) {
    if (a > b) {
        printf("Los numero estan ordenado de mayor a menor es %d, %d \n", b, a);
    } else {
        printf("Los numero estan ordenado de mayor a menor es %d, %d \n", a, b);
    }
}