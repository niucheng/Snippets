#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 1) ����ĺ���һ���Ǹ������
 �� 2) Ϊ����ͨ���Ժ�ǿ׳��Ҫ�󣬲��ܶԿ��ʹ�����κμ���
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
