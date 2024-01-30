#include <stdio.h>
int main(){
    printf("a quanti anni si può prendere la patente nel tuo paese?\n");
    int n;
    scanf("%d", &n);
    printf("quanti anni hai?\n");
    int n1;
    scanf("%d", &n1);
    if(n<=n1){
        printf("puoi prendere la patente\n");
    } else{
        printf("non puoi prendere la patente e sei un coglione\n");
    }
    return(0);
}