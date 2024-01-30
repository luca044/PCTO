#include <stdio.h>
int main(){
    printf("scrivimi la lunghezza di tre lati di un triangolo\n");
    float x;
    float x1;
    float x2;
    scanf("%f", &x);
    scanf("%f", &x1);
    scanf("%f", &x2);
   if(x+x1<x2 || x1+x2<x || x+x2<x1){
        printf("non è un triangolo\n");
   } else if(x==x1 && x1==x2){
        printf("il triangolo è equilatero\n");
    } else if(x!=x1 && x1!=x2 && x!=x2){
        printf("il triangolo è scaleno\n");
    } else{
        printf("il triangolo è isoscele\n");
    }
    return(0);
}