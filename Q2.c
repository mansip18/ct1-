//Program to print minimum number of tiles to cover floor
#include <stdio.h>
int main() {

    int m,n,res;
    scanf("%d %d",&m,&n);
    res=(m*n)%2==0?(m*n/2):((m*n)+1)/2;
    printf("%d",res);
    return 0;
}
