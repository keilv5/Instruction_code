#include <stdio.h>

// 一个递归函数，每次调用自己，不会有终止条件
void recursive_function(int num) {
    // 打印当前的调用次数
    printf("Recursion depth: %d\n", num);
    recursive_function(num + 1);  // 递归调用
}

int main() {
    printf("Starting recursive function...\n");
    recursive_function(1);  // 从1开始递归
    return 0;  // 程序并不会执行到这一行
}
