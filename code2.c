#include <stdio.h>

int main() {
    int a;
    int b;
    int sum;

    // 提示用户输入两个数字
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);

    // 计算两个数的和
    sum = a + b;

    // 输出计算结果
    printf("The sum is: %d\n", sum);

    return 0;
}
