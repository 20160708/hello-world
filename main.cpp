#include<stdio.h>

int test()
{
    FILE *fp = NULL;
    char temp[100] = {0};
    char *s = temp;
    fp = fopen("D:/Master/QT-src/hello/aa.cfg", "r");
    //printf("hello world!!,%d\n",sizeof(long int));
    if(fp == NULL)
    {
        printf("file open error!!\n");
        return 0;
    }
    fgets(s, 100, fp);
    printf("%s\n", s);
    fclose(fp);
    return 0;
}
