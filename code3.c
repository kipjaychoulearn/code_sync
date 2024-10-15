#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("1到1000内所有3的倍数的和是: %d\n", sum);
    return 0;
}

