/*
Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función.
*/

#include <stdio.h>

//Función para calcular el promedio cuando la función sea llamada
float resul (float suma, float conjunto)
{
    return suma/conjunto; //resultado que aparecerá en "resul(suma, conjunto)"
}

//Abrimos función main
int main ()
{
    float num=0, suma=0, conjunto=0; //Nuestras variables
    
    printf ("\n  -Escriba un conjunto de números, cuando acabe coloque un [0]\n");

    /* 
    En vez de pedir al usuario el número de dígitos que piensa
    ingresar, se optó por que se terminara el bucle al poner un 0
    para que se pudiera detener en cualquier instante
    */
    
    do //Bucle "do while" para ingresar todos los valores uno a uno
        {
        printf ("\n   X= ");
        scanf ("%f", &num);

        suma += num; //Todos los valores ingresados se sumarán a "suma"
        conjunto++; //El conjunto servirá para sacar el promedio
            
        } while (num != 0); //El bucle termina cuando detecta que num=0
    
    conjunto--; //Se le resta 1 para que ´0´ no cuente para el conjunto

    printf ("\n  -Resultado: %.1f", resul(suma, conjunto)); //Llamamos a la función
    
    return 0;
}