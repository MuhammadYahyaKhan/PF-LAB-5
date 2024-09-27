#include <stdio.h>

int main() {
    int a;


    printf("Enter an integer: ");
    scanf("%d", &a);


    if (a & 1) {
        printf("odd number\n");
    } else {
        printf("even number");
    }

    return 0;
}
