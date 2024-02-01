#include <stdio.h>
void PariOdispari(int a){
    if(a%2==0){
        printf("%d è pari\n", a);

    } else{
        printf("%d è dispari\n", a);
    }
}
int main(){
    int x;
    scanf(" %d", &x);
    PariOdispari(x);
    return(0);
}