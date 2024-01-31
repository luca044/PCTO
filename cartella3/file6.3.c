#include <stdio.h>
void Calcolatrice(){
    printf("scrivi due numeri\n");
    int x;
    int y;
    scanf(" %d", &x);
    scanf(" %d", &y);
    printf("che operazione vuoi fargli fare?\n");
    char z;
    scanf(" %c", &z);
    if(z=='+'){
        printf("%d+%d=%d\n", x,y,x+y);
    }  else if(z=='-'){
        printf("%d-%d=%d\n", x,y,x-y);
    }  else if(z=='/'){
        printf("%d/%d=%d\n", x,y,x/y);
    }  else if(z=='*'){
        printf("%d*%d=%d\n", x,y,x*y);
    } else{
        printf("devi premere uno dei seguenti simboli: +-*/\n");
    }
}
int main(){
 Calcolatrice();
 return(0);
}