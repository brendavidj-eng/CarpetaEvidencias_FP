// 17_04_26
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

float suma (float a, float b){
    float c;
    c=a+b;
    return c;
}

float resta (float a, float b){
    return a-b;
}

float multiplicacion (float a, float b){
    return a*b;
}

float division (float a, float b){
    if (b==0){
        printf ("La división entre cero no es posible \n");
        return INFINITY;
    }
    return a/b;
}

void menu (){
    printf ("1. Suma \n");
    printf ("2. Resta \n");
    printf ("3. Multiplicación \n");
    printf ("4. División \n");
    printf ("5. Salir \n");
}

int main (){
    float x, y, z;
    int op;

    while (true){
        menu (); //Llamando al menú
        printf ("Selecciona una opción: \n");
        scanf ("%d", &op);
        if (op==5) return 0;

        printf ("Ingrese el primer valor: ");
        scanf ("%f", &x);
        printf ("Ingrese el segundo valor: ");
        scanf ("%f", &y);

    switch(op)
    {
        case 1:
        z=suma(x,y);
        printf ("%f + %f = %f\n", x, y, z);
        break;

        case 2:
        z=resta(x,y);
        printf ("%f - %f = %f\n", x, y, z);
        break;

        case 3:
        z=multiplicacion (x,y);
        printf ("%f * %f = %f\n", x, y, z);
        break;

        case 4:
        z=division (x,y);
        if (z!=INFINITY)
        printf ("%f / %f = %f\n", x, y, z);
        break;

        default:
        printf ("Opción no válida\n");
    }

    printf ("Presiona Enter para continuar...");
    while (getchar()!= '\n');
    getchar ();
    system ("clear");
    }
}