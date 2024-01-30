#include <stdio.h>
int main(){
    printf("scrivi tre numeri\n");
    float n;
    float n1;
    float n2;
    scanf("%f", &n);
    scanf("%f", &n1);
    scanf("%f", &n2);

    if(n-n1==n1-n2){
        printf("sono in progressione aritmetica\n");
    }
     else{
        printf("non sono in progressione aritmetica\n");
    }
    return(0);
}