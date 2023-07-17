#include<stdio.h>
#include<string.h>
void swap(char *str,char *jtr)
{
    int i;
    char ktr[100];
    strcpy(ktr,str);
    strcpy(str,jtr);
    strcpy(jtr,ktr);
    
}