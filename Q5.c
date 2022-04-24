//Program to print time given in seconds in day hour minute second format
#include <stdio.h>
int main()
{
    int sec;
    int d,h,m,s;
    scanf("%d",&sec);
    d=sec/86400;
    h=(sec-d*86400)/3600;
    m=(sec-d*86400-h*3600)/60;
    s=(sec-d*86400-h*3600-m*60);
    printf("The Duration is %d days %d hours %d minutes %d seconds",d,h,m,s);
    return 0;
}