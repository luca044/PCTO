#include <stdio.h>
int main(){
    printf("in che anno sei nat*?\n");
    int x;
    scanf("%d", &x);
    int x1=x-1969;
    int x2=1969-x;
   if(x<2024){
        if(x>1969){
        printf("sei nat* %d anni dopo lo sbarco sulla luna\n", x1);
         } else if(x<1969 && x>1920){
        printf("sei nat* %d anni prima lo sbarco sulla luna\n", x2);
    } else{
        printf("sei nat* %d anni prima lo sbarco sulla luna, e probabilmente sei mort*\n", x2);
    }} else{
        printf("sei un* bugiard* schifos*, e mi fai schifo \n");
    }
    return(0);
}