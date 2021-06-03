#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int mylen(char* c)
{
    int res=0;
    while (*(c+res)!=0)
    {
        res++;
    }
    return res;
}

void copy(char* t, char c[])
{
    int res=0;
    while (c[res])
    {
        *(t+res)=c[res];
        res++;
    }
}

int main()
{   // EXERCICE 1
    //char* c= "abcdefg";
    // printf("%d\n",mylen(c));
    // EXERCICE 2
    char* c="abcdefg";
    char * t =(char*) malloc(8*sizeof(char));
    copy(t,c);
    printf("%d\n",mylen(t));

}





