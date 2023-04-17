#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");  // Corrección: Cambiar "character" a "number"
    scanf("%d", &num);           // Corrección: Cambiar "scan" a "num"


    // true if num is perfectly divisible by 5
    if (num % 5 == 0)               // Corrección: Cambiar el comentario para reflejar la condición correcta
        printf("%d is divisible by 5.", num);  // Corrección: Cambiar "odd" a "divisible by 5"
    else
        printf("%d is not divisible by 5.", num); // Corrección: Cambiar "%c" a "%d" y "odd" a "not divisible by 5"

    return 0;
}
