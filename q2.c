#include <stdio.h>

int main() {
 
    char *gregorianMonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    char *hijriMonths[] = {"Muharram", "Safar", "Rabi' al-Awwal", "Rabi' al-Thani", "Jumada al-Awwal", "Jumada al-Thani", "Rajab", "Sha'ban", "Ramadan", "Shawwal", "Dhu al-Qi'dah", "Dhu al-Hijjah"};

  
    int numMonths = sizeof(gregorianMonths) / sizeof(gregorianMonths[0]);

    printf("Gregorian Months:\n");
    for (int i = 0; i < numMonths; ++i) {
        printf("%d. %s\n", i + 1, gregorianMonths[i]);
    }
    printf("\nHijri Months:\n");
    for (int i = 0; i < numMonths; ++i) {
        printf("%d. %s\n", i + 1, hijriMonths[i]);
    }

    return 0;
}






