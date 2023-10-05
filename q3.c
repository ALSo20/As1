#include <stdio.h>

int main() {
    char fullName[100];
    int age;
    char address[100];

    printf("Enter your full name: ");
    scanf("%99[^\n]", fullName); 
    printf("Enter your age: ");
    scanf("%d", &age);
    while (getchar() != '\n');

    printf("Enter your address: ");
    scanf("%99[^\n]", address);
    printf("\nPersonal Information:\n");
    printf("Name   : %s\n", fullName);
    printf("Age    : %d\n", age);
    printf("Address: %s\n", address);
    return 0;
}

