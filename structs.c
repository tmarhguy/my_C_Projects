#include <stdio.h>
#include <string.h>

int main(){

        struct date {
        int day;
        int month;
        int year;
    };

    struct person{
        struct date birthday;
        float height;
        char name [25];
    };



    struct person tyrone;
    tyrone.birthday.day = 24;
    tyrone.birthday.month = 11;
    tyrone.birthday.year = 2003;
    tyrone.height = 1.68/1000;
    strcpy(tyrone.name, "Tyrone Marhguy");

    printf("%s was born on %d/%d/%d and is %fkm tall", 
    tyrone.name,
    tyrone.birthday.day,
    tyrone.birthday.month,
    tyrone.birthday.year,
    tyrone.height);



    return 0;
}