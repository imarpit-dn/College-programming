#include <stdio.h>

int main() {
    int call, outcome;

    printf("Captain 1: Enter your call (1 for Heads, 2 for Tails): ");
    scanf("%d", &call);

    printf("Enter actual toss result (1 for Heads, 2 for Tails): ");
    scanf("%d", &outcome);

    if (call == outcome) {
        printf("Captain 1 won the toss!\n");
    } else {
        printf("Captain 2 won the toss!\n");
    }

    return 0;
}
