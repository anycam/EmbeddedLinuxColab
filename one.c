#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");  // Corrección: Cambiar "character" a "number"
    scanf("%d", &num);           // Corrección: Cambiar "scan" a "num"

<<<<<<< HEAD
    // true if num is perfectly divisible by 5
    if (num % 5 == 0)               // Corrección: Cambiar el comentario para reflejar la condición correcta
        printf("%d is divisible by 5.", num);  // Corrección: Cambiar "odd" a "divisible by 5"
=======
    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
>>>>>>> 33c005c0a5098efb25c24ddc92f9d1528e1aba56
    else
        printf("%d is not divisible by 5.", num); // Corrección: Cambiar "%c" a "%d" y "odd" a "not divisible by 5"

    return 0;
}
