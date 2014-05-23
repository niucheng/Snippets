#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 这里示范的是宏定义时常用的一种技巧
 * 1) 下面的宏是一个非复合语句
 * 2) 为满足通用性和强壮性要求，不能对宏的使用方法做任何假设
 */
#define PRINT_GREETINGS do { \
    printf("Hi there!\n"); \
} while (0)

/*
 * 构造函数
 */
void foo(void) __attribute__ ((constructor));

int main(const int argc, const char* const* argv)
{
    // Invoke function via macro
    PRINT_GREETINGS;

    return EXIT_SUCCESS;
}

void foo(void)
{
    printf("foo\n");
}

