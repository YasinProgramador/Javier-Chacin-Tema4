/*
Ejercicio 4. Escribir una función que calcule y presente las raíces reales de la
ecuación de segundo grado...

ax2+bx+c=O

utilizando la fórmula...

𝑥 = −𝑏 ± √𝑏2 − 4𝑎𝑐
        2𝑎

Suponer que a, b y c son argumentos en coma flotante con valores dados y que x1
y que x2 son variables en coma flotante. Suponer también que b'>4*a*c, de forma
que las raíces calculadas son siempre reales.
*/

#include <stdio.h>
#include <math.h>

//Función que nos servirá para calcular el resultado de x1
float x1 (float a, float b, float c) {
    return (-b + (sqrt(b*b-4*a*c))) / (2*a);
    //Utilizando la fórmula X = -b + √b^2-4ac / 2a
}

//Función que nos servirá para calcular el resultado de x2
float x2 (float a, float b, float c) {
    return (-b - (sqrt(b*b-4*a*c))) / (2*a);
    //Utilizando la fórmula X = -b - √b^2-4ac / 2a
}

//Abrimos función main
int main(void) {
    
    float a, b, c; //Variables

    /*
    Permitimos al usuario escribir los valores de "a","b" y "c"
    */
    
    printf ("-Ecuaciones de segundo grado: ax2+bx+c=O\n\n");
    printf ("-Ingrese valor ´a´ (agregará x^2 automáticamente):  ");
    scanf ("%f", &a);
    printf ("-Ingrese valor ´b´ (agregará x automáticamente):    ");
    scanf ("%f", &b);
    printf ("-Ingrese valor ´c´ (no agregará nada):              ");
    scanf ("%f", &c);

    /*
    Hay 2 casos en los que no se puede resolver la ecuación,
    cuando a=0 y cuando el radicando es menor que 0, así que hay
    que imprimir un mensaje de error para cuando se cumplan alguna
    de estas condiciones.
    */
    
    if (a == 0) {
        printf ("\n-Error, ´a´ no puede ser igual a 0"); 
    }
    else
    {
        if (a == 0 || (b*b-4*a*c)<0) {
        printf ("\n-Error, el radicando no puede ser menor a 0"); 
        }
        else
        {
            /*
            Si ninguna condición se cumple se sigue con el
            ejercicio
            */
            
            printf ("\n-Su ecuación es: %0.fx^2 + %0.fx + %0.f", a, b, c);
            printf ("\n-x1: %.2f", x1(a, b, c));
            printf ("\n-x2: %.2f", x2(a, b, c)); 

            /*
            Llamamos a las funciones para que calculen los resultados
            y que se impriman en pantalla
            */
        }
    }

  return 0;     
}