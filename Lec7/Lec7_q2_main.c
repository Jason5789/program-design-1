#include <stdio.h>

int a_1, a_n, d;

int sum(int a_i);

int main()
{
    scanf("%d %d %d", &a_1, &a_n, &d);
    printf("%d", sum(a_1));
    return 0;
}