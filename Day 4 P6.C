#include <stdio.h>

int main() {
    int total_days, years = 0, months = 0, days = 0;

    printf("Enter total days: ");
    scanf("%d", &total_days);

    if (total_days < 0) {
        printf("Invalid input! Days cannot be negative.\n");
    } else if (total_days >= 365) {
        // More than or equal to a year
        years = total_days / 365;
        months = ((total_days)%365)/30;
        days = ((total_days)%365)%30;
        printf("Age: %d Year(s), %d Month(s), and %d Day(s)\n", years, months, days);
    } else if (total_days >= 30) {
        // Less than a year, but at least one month
        months = total_days / 30;
        days = total_days % 30;
        printf("Age: 0 Year(s), %d Month(s), and %d Day(s)\n", months, days);
    } else {
        // Less than a month
        days = total_days;
        printf("Age: 0 Year(s), 0 Month(s), and %d Day(s)\n", days);
    }

    return 0;
}
	

