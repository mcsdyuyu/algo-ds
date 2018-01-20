#include <stdio.h>

int main() 
{
    int a, b, t;
    //p1-8
    scanf("%d%d", &a, &b);
    t = a; 
    a = b;
    b = t;
    printf("%d %d\n", a, b);

    //p1-9 -- don't use this
    scanf("%d%d", &a, &b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("%d %d\n", a, b);

    //p1-10 - is it cheat?
    scanf("%d%d", &a, &b);
    printf("%d %d\n", b, a);

    return 0;
}