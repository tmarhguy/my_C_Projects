#include <stdio.h>
#include <stdlib.h>

//allocate memory to a pointer before using it!!

int main(){

    struct numbers{
        int * decimal;
        //double complex;
    };

    struct letters{
        char *vowels;
       // char consonants;
    };

    struct data {
        struct numbers nums;
        struct letters lets;
    };

    int i = 0;

    struct data * container [26];

    for (i = 0; i<26; i++){
        container[i] = malloc (sizeof(struct data));

        container[i]->nums.decimal = malloc(sizeof(int));
        container[i]->lets.vowels = malloc(sizeof(char));

        *(container[i]->nums.decimal) = i;
        *(container[i]->lets.vowels) = 'A'+ i ;
    }

    for (i = 0; i< 26; i++){
        printf("Letter: %c and number: %d\n", *(container[i]->lets.vowels), *(container[i]->nums.decimal));
    }

     for (i = 0; i< 26; i++){
        free(container[i]);
     }

    return 0;
}