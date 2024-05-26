#include<stdio.h>
//穿参以数组的形式接收
void print1(int arr[3][5],int x,int y)
{
    int i=0;
    int j=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
//穿参以指针的形式接收
void print2(int(*p)[5],int x,int y)
{
    int i=0;
    for(i=0;i<x;i++)
    {
        int j=0;
        for(j=0;j<y;j++)
        {
            printf("%d",(*(p+i))[j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print1(arr,3,5);
    print2(arr,3,5);
    return 0;
}