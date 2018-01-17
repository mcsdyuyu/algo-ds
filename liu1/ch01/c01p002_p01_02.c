#include <stdio.h>

int main()
{   
    //整数用d输出 实数用lf输出
    //p1-2
    printf("%.1lf\n", 8.0 / 5.0);

    //pracs
    printf("%.2lf\n", 8.0 / 5.0);  //点后面的数字表示保留几位小数
    printf("%.1lf\n", 8 / 5);   //编译会报警 结果是1.6
    printf("%d\n", 8.0 / 5.0);  //编译会报警 结果是0 和浮点数以及整数在保存方式有关


    return 0;
}