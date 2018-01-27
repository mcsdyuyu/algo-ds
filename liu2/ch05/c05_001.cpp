#include <cstdio>

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b) == 2) { //scanf的返回值是读取到数据的个数
        printf("%d\n", a + b);
    }
 
    return 0;
}