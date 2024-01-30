#include <stdio.h>
int main()
{
    printf("quanti anni hai?\n");
    int n;
    scanf("%d", &n);
    if(n>18){
        printf("sei maggiorenne\n");
    } else if(n==18){
        printf("sei un coglione\n");
    } else{
        printf("sei minorenne\n");
    }
}