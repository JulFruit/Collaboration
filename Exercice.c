#include <stdio.h>

int mylen(char* c)
{
    int res=0;
    while (*(c+res)!=0)
    {
        res++;
    }
    return res;
}

int main()
{
    char* c= "abcdefg";
    printf("%d\n",mylen(c));
}

