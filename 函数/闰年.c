//编一个函数，若参数y为闰年，则返回1；否则返回0。主函数接受键盘输入一个合法的年份，判断是不是闰年
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int leap_year(int y)
{
    if(y%4==0 && y%100!=0 || y%400 == 0)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    return y;
}

int main(int argc, char *argv[])
{

    int y,t;
    printf("请输入合法年份:\n");
    scanf("%d",&y);
    t = leap_year(y);
    if(t == 1)
    {
        printf("%d是闰年",y);
    }
    else
    {
        printf("%d不是闰年",y);
    }
}
#endif

