#include <stdio.h>
#include <string.h>
#define MAXN 15

int a[MAXN][MAXN];

int main() 
{
    int n, x, y, tot = 0;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));

    tot = a[x=0][y=n-1] = 1; //注意执行先后 效果是tot和a[0][n-1]=1 右上角设置为1
    
    while(tot < n * n) //没有走完方块就继续
    {
        while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;  //若右边有空且没到边界，一直右移，直到没空或者到边界
        while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;  //若上边有空且没到边界，一直上移，直到没空或者到边界
        while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;  //若左边有空且没到边界，一直左移，直到没空或者到边界
        while(y+1 <n && !a[x][y+1]) a[x][++y] = ++tot;  //若下边有空且没到边界，一直下移，直到没空或者到边界
    }

    for(x = 0; x < n; x++) {
        for(y = 0; y < n; y++) {
            printf("%4d", a[x][y]);
        }
        printf("\n");
    }

    return 0;
}