#include <stdio.h>
int main()
{
    int fa, sa, ta;

    printf(" enter first angle =");
    scanf("%d", &fa);

    printf(" enter second angle =");
    scanf("%d", &sa);

    ta = 180 - (fa + sa);

    printf("degree of third angle is = %d", ta);
}