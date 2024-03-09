#include <stdio.h>

int main() {
    int x;
    int y;

    printf("First value: ");
    scanf("%d", &x);

    printf("Second value: ");
    scanf("%d", &y);

    int m = x * y;
    printf("The multiplication of %d by %d is equal to %d\n", x, y, m);
    
    return 0;
}
