#include <stdio.h>

int main()
{
    printf("%.1f\n", 8.0 / 5.0);  //1.6

    printf("%.2f\n", 8.0 / 5.0);  //1.60 点后面的数字表示保留几位小数
    printf("%.1f\n", 8 / 5);   //1.6  编译会报警
    printf("%d\n", 8.0 / 5.0);  //1 编译会报警 结果是1 
    return 0;
}