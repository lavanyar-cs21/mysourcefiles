#include <stdio.h>
int sum;

int Sum(int a, int b) {
    if (b == 0)
        return a;
    sum = Sum(a, b - 1) + 1;
    return sum;
}

int main() {
    int x,y;

    printf("Enter Two Integer Values:");
    scanf("%d %d", &x, &y);
    printf("The Total Value: %d + %d = %d\n", x,y,Sum(x,y));
    return 0;
}
