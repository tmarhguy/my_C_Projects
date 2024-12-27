#include <stdio.h>
#include <stdlib.h>

int main(){
    int * buffer;

    buffer = (int *)malloc (sizeof(int) * 16);

    if (buffer == NULL){
        printf("Unable to allocate memory");
        exit(1);
    }

    printf("Memory allocation successful!");

    free(buffer);

    return 0;
}