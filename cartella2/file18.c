#include <stdio.h>
int main()
{   int x=2;
    int primo=1;
    printf("scegli un numero ");
    unsigned int N;
     scanf("%d", &N);
    while(N/2>=x && primo==1){
        
        if(N%x==0){
            primo=0;
        }
        x=x+1;
    }
    if(primo==1){
        printf("%d è primo\n", N);
    } else{
        printf("%d non è primo\n", N);
    }
    return(0);

}