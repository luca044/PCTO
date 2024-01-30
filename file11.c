#include <stdio.h>
int main(){
    printf("inserisci un anno\n");
    int x;
    scanf("%d", &x);
    if((x%4==0 && x%100!=0)|| x%400==0){
        printf("%d è un anno bisestile\n", x);
    } else{
        printf("%d non è un anno bisestile\n", x);
    }
    
    return(0);
}