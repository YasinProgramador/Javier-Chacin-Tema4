/*
Ejercicio 1. Escribir una función que sume dos números. Implemente un programa
que la utilice.
*/

#include <stdio.h>

int resul (int num1, int num2)
{
    return num1+num2; //Suma realizada
}

//Abrimos una función main
int main () {

    int num1, num2;

    //Dejamos al usuario escribir sus 2 números
    
    printf ("\n  -Escribir 1er número: ");
    scanf ("%d", &num1); //Primer número
    printf ("  -Escribir 2do número: ");
    scanf ("%d", &num2); //Segundo número

    /*
    Hacemos la suma en otra función para mostrar el
    resultado en pantalla...
    */
    
    printf ("\n  -Resultado: %d", resul(num1, num2));

    return 0;
}

