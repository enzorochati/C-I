#include <stdio.h>

int main() {
    int number;
    printf("Which multiplication table do you want? ");
    scanf("%d", &number);

    for(int i = 0; i <= 10; i++) {
        int multiplication = number * i;
        printf("%d x %d = %d\n", number, i, multiplication);
    }

    return 0;
}
