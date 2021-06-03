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

int nmb_e(char*t)
{
    int res=0;
    int nb_e=0;
    while (*(t+res)!=0)
    {
        if (*(t+res)=='e')
        {
            nb_e++;
        }
        res++;
    }
    return nb_e; 
}

int main()
{   // EXERCICE 1
    //char* c= "abcdefg";
    // printf("%d\n",mylen(c));
    // EXERCICE 2
    char* c="abedefg";
    char * t =(char*) malloc(8*sizeof(char));
    copy(t,c);
    printf("%d\n",nmb_e(t));
    // EXERCICE 3


}





