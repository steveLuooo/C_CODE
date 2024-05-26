#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE* pf=fopen("test.txt","r");
   if(pf==NULL)
   {
    return 0;
   }  
   //1定位文件指针
   fseek(pf,4,SEEK_CUR);
   int pos=ftell(pt);
   printf("%d\n",pos);
//    //2读取文件
//    int ch=fgetc(pf);
//   printf("%c\n",ch);

   fclose(pf);
   pf=NULL;
   return 0;
}