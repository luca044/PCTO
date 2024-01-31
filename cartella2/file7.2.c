#include <stdio.h>
int main(){
    printf("scrivi la lunghezza di tre lati\n");
    float x;
    float x1;
    float x2;
    scanf("%f", &x);
    scanf("%f", &x1);
    scanf("%f", &x2);
    if(x+x1>x2 && x1+x2>x && x+x2>x1){
        printf("possono formare un tirangolo\n");
    } else{
        printf("non possono formare un triangolo\n");
    }
}