#include <stdio.h>

int sum(int x, int y);
int main(void) {
    int a, b;
    printf("Enter a, b\n");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", sum(a, b));
    return 0;
}

int sum(int x, int y) {
    return x + y;
}
