#include <stdio.h>
long Fattoriale(int x, long y, int n){
    while(x<=n){
        
        y=y*x;
        x=x+1;
      
    }
    return(y);

}
int main(){
    printf("inserisci un numero da fattorializzare ");
    int a=1;
    long b=1;
    int c;
    scanf("%d", &c);
    
    b=Fattoriale(a,b,c);
    printf("%ld\n", b);
    return(0);
}