#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * ����ʾ�����Ǻ궨��ʱ���õ�һ�ּ���
 * 1) ����ĺ���һ���Ǹ������
 * 2) Ϊ����ͨ���Ժ�ǿ׳��Ҫ�󣬲��ܶԺ��ʹ�÷������κμ���
 */
#define PRINT_GREETINGS do { \
    printf("Hi there!\n"); \
} while (0)

int main(const int argc, const char* const* argv)
{
    // Invoke function via macro
    PRINT_GREETINGS;

    return 0;
}
