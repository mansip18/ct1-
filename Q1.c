//Program to convert km to m,ft,in and cm

#include <stdio.h>
int main(){
    float km,m,ft,in,cm;
    scanf("%f",&km);
    m = km*1000;
    ft = km*3280.84;
    in = km*39370.1;
    cm = km*100000;
    printf("%.2f m",m);
    printf("\n%.2f ft",ft);
    printf("\n%.2f in",in);
    printf("\n%.2f cm",cm);
    return 0;
}