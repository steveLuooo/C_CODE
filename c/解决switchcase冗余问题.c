#include<stdio.h>
#include<stdio.h>
void menu()
{
    printf("*************************\n");
    printf("**1.add          2.sub **\n");
    printf("**3.mul          4.div **\n");
    printf("**5.xor          0.exit**\n");
    printf("*************************\n");

}
//这类函数都是回调函数
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
int Xor(int x,int y)
{
    return x^y;
}
//回调函数的关键解语句 函数指针的形式（冗余部分直接封装成函数）
void calc(int(*pf)(int,int))
{
    int x=0;
    int y=0;
    printf("请输入两个操作数；>");
    scanf("%d%d",&x,&y);
    printf("%d\n",pf(x,y));
}
int main()
{
    int input=0;
    do
    { 
        menu();
        printf("请选择：>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
        calc(Add);
        break;
        case 2:
        calc(Sub);
        break;
        case 3:
        calc(Mul);
        break;
        case 4:
        calc(Div);
        break;
        case 5:
        calc(Xor);
        break;
        case 0:
        printf("退出\n");
        break;
        default:
        printf("选择错误\n");
        break;
        }
    } while (input);
    return 0;
}