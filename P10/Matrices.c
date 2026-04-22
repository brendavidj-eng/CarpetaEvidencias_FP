#include <stdio.h>
#define MAX 100


void leer_matriz(int mat[][MAX], int f, int c){
    for(int i=0; i<f; i++){         //Sirve para cambiar de renglón
        for(int j=0; j<c; ++j){     // Cambia las columnas de un renglón
            printf ("Ingresa el valor para M[%d, %d]: ");
            scanf ("%d", &mat[i][j]);
        }
    }
}

void mostrar_matriz(int mat[][MAX], int f, int c){
    for(int i=0; i<f; i++){
        printf("[ ");
        for(int j=0; j<c; ++j){
            printf("%d ", mat[i][j]);
        }
        printf("]\n");
    }
}

void sumar_matriz(int A[][MAX], int B[][MAX], int C[][MAX], int f, int c){
    for(int i=0; i<f; i++){
        for(int j=0; j<c; ++j){
            C[i][j] <- A[i][j] + B[i][j];
        }
    }
}

void multiplicar_matriz(int A[][MAX], int B[][MAX], int C[][MAX], int fA, int cA, int cB){
    for(int i=0; i<fA; i++){
        for(int j=0; j<cB; ++j){
            C[i][j] <- 0;
            for(int k=0; k<cA; k++){
                C[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
}

void transpuesta_matriz(int A[][MAX], int T[][MAX]){}

// Proceso Principal

float A, B, C;
int fA, cA, fB, cB, opcion;

int main()
{

    printf("Ingrese filas y columnas de la matriz A: \n");
    scanf("%d %d", fA, cA);
    int A[fA][cA];
    scanf("%d, %d", fA, cA);

    void menu()
    {
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Multiplicación \n");
        printf("4. Transpuesta \n");
        printf("5. Determinante \n");
    }

int main (){
    float A, B, C;
    int opcion, fA, cA, fB, cB;

    while (true){
        menu (); //Llamando al menú
        printf ("Selecciona una opción: \n");
        scanf ("%d", &op);
        if (op==6) return 0;

        printf ("Ingrese el primer valor: ");
        scanf ("%f", &x);
        printf ("Ingrese el segundo valor: ");
        scanf ("%f", &y);

    switch (opcion){
        case 1:
        z=suma(x,y)
    }
}

// Dimension A[fA, cA] LeerMatriz(A, fA, cA)


    Escribir "Seleccione operación:" Escribir "1. Suma" Escribir "2. Multiplicación" Escribir "3. Transpuesta" Escribir "4. Determinante" Leer opcion

    Segun opcion Hacer
    1 : Escribir "Ingrese filas y columnas de la matriz B:" Leer fB,
        cB
        Si fA = fB Y cA = cB Entonces
        Dimension B[fB, cB] Dimension C[fA, cA] LeerMatriz(B, fB, cB)
            SumarMatrices(A, B, C, fA, cA)
                MostrarMatriz(C, fA, cA)
                    SiNo
        Escribir "No se pueden sumar" FinSi

        2 : Escribir "Ingrese filas y columnas de la matriz B:" Leer fB,
           cB
           Si cA = fB Entonces
           Dimension B[fB, cB] Dimension C[fA, cB] LeerMatriz(B, fB, cB)
               MultiplicarMatrices(A, B, C, fA, cA, cB)
                   MostrarMatriz(C, fA, cB)
                       SiNo
           Escribir "No se pueden multiplicar" FinSi

           3 : Dimension C[cA, fA] Transpuesta(A, C, fA, cA)
                   MostrarMatriz(C, cA, fA)

                       4 : Si fA = cA Entonces
                           Escribir "Determinante = ",
           Determinante(A, fA)
               SiNo
        Escribir "Debe ser matriz cuadrada" FinSi
        FinSegun
        FinProceso

        SubProceso LeerMatriz(M Por Referencia, f, c)
Para i < -0 Hasta f - 1 Para j < -0 Hasta c - 1 Escribir "Elemento [", i, ",", j, "]: " Leer M[i, j] FinPara FinPara FinSubProceso

                                                                                      SubProceso
                                                                                      MostrarMatriz(M, f, c)
Para i < -0 Hasta f - 1 Para j < -0 Hasta c - 1 Escribir Sin Saltar M[i, j], " " FinPara Escribir "" FinPara
                                                                                 FinSubProceso

                                                                                     SubProceso
                                                                                     SumarMatrices(A, B, C Por Referencia, f, c)
Para i < -0 Hasta f - 1 Para j < -0 Hasta c - 1 C[i, j] < -A[i, j] + B[i, j] FinPara
                                                                         FinPara
                                                                             FinSubProceso

                                                                                 SubProceso
                                                                                 MultiplicarMatrices(A, B, C Por Referencia, fA, cA, cB)
Para i < -0 Hasta fA - 1 Para j < -0 Hasta cB - 1 C[i, j] < -0 Para k < -0 Hasta cA - 1 C[i, j] < -C[i, j] + A[i, k] * B[k, j] FinPara
                                                                                                                           FinPara
                                                                                                                               FinPara
                                                                                                                                   FinSubProceso

                                                                                                                                       SubProceso
                                                                                                                                       Transpuesta(A, T Por Referencia, f, c)
Para i < -0 Hasta f - 1 Para j < -0 Hasta c - 1 T[j, i] < -A[i, j] FinPara
                                                              FinPara
                                                                  FinSubProceso

                                                                      Funcion det < -Determinante(M, n)
                                                                                        Definir det Como Real
                                                                                    Definir subM Como Real
                                                                                    Definir signo,
    i, j, k, l, subi, subj Como Entero

                      Si n = 1 Entonces det < -M[0, 0] SiNo det < -0 signo < -1

                                                                             Para i < -0 Hasta n - 1 Dimension subM[n - 1, n - 1] subi <
                             -0

                             Para j < -1 Hasta n - 1 subj <
                             -0 Para k < -0 Hasta n - 1 Si k<> i Entonces subM[subi, subj] < -M[j, k] subj < -subj + 1 FinSi FinPara subi < -subi + 1 FinPara

                                                                                                                                                det <
                             -det + signo * M[0, i] * Determinante(subM, n - 1) signo < -signo * -1 FinPara FinSi FinFuncion