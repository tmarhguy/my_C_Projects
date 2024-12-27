#include <stdio.h>

void numbers();

int main(){

    printf("This is another C project written to test the app and things\n");
    numbers();
    return 0;
}

void numbers(){
    int nums [] = {13,42,53,43,57};
    for (int i = 0; i< 5; i++){
        printf("#%d number is %d\n", i+1 , nums [i]);
    }
}