#include <stdio.h>
int main()
{
    printf("inserisci un numero da fattorializzare ");
    int x=1;
    long y=1;
    int n;
    scanf("%d", &n);
    
    while(x<=n){
        
        y=y*x;
        x=x+1;
      
        printf("%ld\n", y);
    }
    
    return(0);
}