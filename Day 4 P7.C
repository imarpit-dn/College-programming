#include <stdio.h>

int main() {
    int total_seconds, hours = 0, minutes = 0, seconds = 0;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    if (total_seconds < 0) {
        printf("Invalid input! Seconds cannot be negative.\n");
    } else if (total_seconds >= 3600) {
        // More than or equal to an hour (3600 seconds)
        hours = total_seconds / 3600;
        minutes = (total_seconds % 3600) / 60;
        seconds = (total_seconds % 3600) % 60;
        printf("Time: %d Hour(s), %d Minute(s), and %d Second(s)\n", hours, minutes, seconds);
    } else if (total_seconds >= 60) {
        // Less than an hour, but at least one minute (60 seconds)
        minutes = total_seconds / 60;
        seconds = total_seconds % 60;
        printf("Time: 0 Hour(s), %d Minute(s), and %d Second(s)\n", minutes, seconds);
    } else {
        // Less than a minute
        seconds = total_seconds;
        printf("Time: 0 Hour(s), 0 Minute(s), and %d Second(s)\n", seconds);
    }

    return 0;
}
