#include <stdio.h>
#define MAX 200000

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int data[MAX], n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
        scanf("%d", &data[i]);
    
    int maxv = -2000000000;  //设置一个足够小的值
    int minv = data[0];

    for(int i = 1; i < n; i++) {
        maxv = max(maxv, data[i] - minv);  //更新最大值
        minv = min(minv, data[i]);   //现阶段的最小值
    }

    printf("%d\n", maxv);
    
    return 0;
}