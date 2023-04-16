#include <stdio.h>
int main() {
    int num;
    printf("Enter an character: ");
    scanf("%d", &scan);

    // true if num is perfectly divisible by 2
    if(num % 5 == 0)
        printf("%d is odd.", num);
    else
        printf("%c is odd.", num);
    
    return 0;
}
