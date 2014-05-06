#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 1) 下面的宏是一个非复合语句
 × 2) 为满足通用性和强壮性要求，不能对库的使用做任何假设
 */
#define PRINT_GREETINGS do { \
    printf("Hi there!\n"); \
} while (0)

int main(const int argc, const char* const* argv)
{
    // macro
    PRINT_GREETINGS;

    return 0;
}
