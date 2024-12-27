#include <stdio.h>

int main(){
    char name [] = "Tyrone Marhguy";
    char *pointer;

    pointer = name;

    printf("The value in the variable name is %s\n", name);
    printf("The value in the pointer is %s\n", pointer);

    int i = 0;

    while (*(pointer + i) != '\0')
        {
            printf("Character at position %d is %c\n", i, *(pointer + i));
            i++;
        }

    return 0;
}