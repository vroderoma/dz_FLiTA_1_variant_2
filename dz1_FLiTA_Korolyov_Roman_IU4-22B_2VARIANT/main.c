#include <conio.h>
#include <stdio.h>
#include <stdlib.h>



int main() {
    int size, i, j;
    int  *decimals = NULL;
    int *binary = NULL;
    printf("Type amount of numbers in plenty:");
    scanf("%d", &size);
    if ((size >= 'A' && size <= 'Z') || (size >= 'a' && size <= 'z')|| size <= 0){
        printf("Error!");
        exit(EXIT_FAILURE);
    }
    decimals = (int *) malloc(size - 1);
    binary = (int *) malloc(size - 1);
    for (int i = 0; i <= size - 1; i++) {
        printf("Type digit:");
        scanf("%d", &decimals[i]);

    }

    printf("{Decimals: ");
    for (i = 0; i < size; i++) {
        printf("%d; ", decimals[i]);
        if ((decimals[i] >= 'A' && decimals[i] <= 'Z') || (decimals[i] >= 'a' && decimals[i] <= 'z')|| decimals[i] <= 0){
            printf("Error!");
            exit(EXIT_FAILURE);
        }
    }


    printf("Binary: ");
    for (i = 0; i < size; i++) {

        binary[i] = 0;
        j = 1;
        while (decimals[i] != 0) {
            binary[i] += (decimals[i] % 2) * j;
            decimals[i] /= 2;
            j *= 10;

        }
    }
    for (i = 0; i < size; i++) {
        printf("%d; ", binary[i]);
    }


    printf("}");
    free(decimals);
    free(binary);
}


