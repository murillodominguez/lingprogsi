#include <stdio.h>

void cocktail_sort(int vector[], int length)
{
    int top, bottom, swapped, i, aux;
    
    bottom = 0;
    top = length - 1;
    swapped = 1;
    
    while (swapped)
    {
        swapped = 0;
        
        for (i = bottom; i < top; i++)
        {
            if (vector[i] > vector[i+1]) {
                aux = vector[i];
                vector[i] = vector[i+1];
                vector[i+1] = aux;
                swapped = 1;
            }
        }
        
        if (!swapped)
        {
            break;
        }
        
        top--;
        
        swapped = 0;
        
        for (i = top; i > bottom; i--)
        {
            if (vector[i] < vector[i-1]) {
                aux = vector[i];
                vector[i] = vector[i-1];
                vector[i-1] = aux;
                swapped = 1;
            }
        }
        
        bottom++;
    }
}

int main()
{
    int vector[] = {1,5,7,3,2,8,0,9,4,6};
    int length = sizeof(vector) / sizeof(int);
    
    cocktail_sort(vector, length);

    for (int i = 0; i < length; i++) {
        printf("%d ", vector[i]);
    }
    
    return 0;
}