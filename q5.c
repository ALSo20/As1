#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <hours>\n", argv[0]);
        return 1; // Exit with an error code
    }
    int hours = atoi(argv[1]);
    int seconds = hours * 3600; // 1 hour = 3600 seconds
    printf("%d hours is equal to %d seconds.\n", hours, seconds);

    return 0;
}

