/*===============================================================
*   Copyright (C) 2019 All rights reserved.
*   
*   文件名称：test.c
*   创 建 者：@liuchen
*   创建日期：2019年12月07日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Average(char *s,int n)
{
    double arr[n];
    int num=0;
    char *p=NULL;
    int i=0;
    for(;i<n;i++)
    {
      p=strtok(s," ");
        num+=atoi(p);
        while(p!=NULL)
        {
            p=strtok(NULL, " ");
            num+=atoi(p);
        }
        arr[i]=num/4;
    }
    
}
int main()
{
   char *p="98 97.2 90.6 95";
   Average(p,1);


}
