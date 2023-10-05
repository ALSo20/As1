#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[10];

    for (int i = 0; i < 10; ++i) {
        printf("Enter name for student %d\n: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade for student %d\n: ", i + 1);
        scanf("%d", &students[i].grade);
    }

    printf("\nStudent Grades:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Name: %s, Grade: %d\n", students[i].name, students[i].grade);
    }

    return 0;
}
























