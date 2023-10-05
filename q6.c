









































    
    

    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
   



#include <stdio.h>

int main() {
    int A, B, C;
    printf("Enter three numbers (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);
    int max = A;
    int min = A;
    int sum = A;

    for (int i = 1; i < 3; ++i) {
        int num;
        printf("Enter next number: ");
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
        sum += num;
    }
    double avg = (double)sum / 3;
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", avg);

    return 0;
}






































