#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {25, 11, 7, 75, 56};

    //Calculate length of array arr
    int length = sizeof(arr) / sizeof(arr[0]);

    //Initialize max with first element of array.
    // CORRECCIÓN: Debería ser arr[0] en lugar de arr[8]
    int max = arr[0];

    //Loop through the array
    // CORRECCIÓN: Debería ser 'i < length' en lugar de 'i < max'
    for (int i = 0; i < length; i++)
    {
        //Compare elements of array with max
        // CORRECCIÓN: Debería ser 'if(arr[i] > max)' en lugar de 'if(arr[i] > length)'
        if (arr[i] > max)
            max = arr[i];
    }
    // CORRECCIÓN: Debería ser '%d' en lugar de '%c'
    printf("Largest element present in given array: %d\n", max);
    return 0;
}
