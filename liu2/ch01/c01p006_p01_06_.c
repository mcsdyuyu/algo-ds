#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d", &n);

    //p1-6
    printf("%d%d%d\n", n % 10, n /10 % 10, n /100);

    //p1-7
    m = (n%10) * 100 +(n/10%10) * 10 + n/100;
    printf("%d\n", m);

    return 0;
}