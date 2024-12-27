#include <stdio.h>

void start();
void quit();



int main(){
    start();

    return 0;
}

void start(){

    int option;

    printf("Welcome to AttendancePro\n");
    puts("1. Add entry\n");
    puts("2. View records\n");
    puts("3. Search by ID\n");
    puts("4. Delete entry\n");
    puts("5. Exit\n\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    printf("This is your current option: %d", option);
}