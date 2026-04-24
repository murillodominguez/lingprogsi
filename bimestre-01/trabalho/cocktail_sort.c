#include <stdio.h>

void print_vector(int* vector, int size) {
    int* end = vector + size;
    
    while (vector != end) {
        printf("%d\n", *vector);
        ++vector;
    }
    
    printf("\n");
}

int main() {
    int vector[5] = {3,2,5,4,1};
    int size, top, bottom, swapped, i, aux;
    
    size = sizeof(vector) / sizeof(int);
    
    bottom = 0;
    top = size - 1;
    
    while (bottom < size) {
        swapped = 0;
        
        i = bottom;
        
        while(i < top) {
            if (vector[i] > vector[i+1]) {
                aux = vector[i];
                vector[i] = vector[i+1];
                vector[i+1] = aux;
                swapped = 1;
                print_vector(vector, size);
            }
            
            i++;
        }
        
        swapped = 0;
        
        i = top;
        
        while (i > bottom) {
            if (vector[i] < vector[i-1]) {
                aux = vector[i];
                vector[i] = vector[i-1];
                vector[i-1] = aux;
                swapped = 1;
                print_vector(vector, size);
            }
            
            i--;
        }
        
        if (swapped == 0) {
            break;
        }
        
        top--;
        bottom++;
    }
    printf("Resultado final:\n");
    print_vector(vector, size);
}