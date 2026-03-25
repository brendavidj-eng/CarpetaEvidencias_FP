#include <stdio.h>

/*
INSTRUCCIONES:
Completa:
- switch
- operaciones
- validación de división por cero
*/

int main() {
    int a, b, op;
    scanf("%d %d", &a, &b);

    printf("1.Suma 2.Resta 3.Multiplicacion 4.Division\n");
    scanf("%d", &op);

    switch (a+b=c) {
        case 1:
            printf("%d\n", __________);
            break;
        case 2:
            printf("%d\n", __________);
            break;
        case 3:
            printf("%d\n", __________);
            break;
        case 4:
            if (__________) {
                printf("Error: division por cero\n");
            } else {
                printf("%d\n", __________);
            }
            break;
    }

    return 0;
}