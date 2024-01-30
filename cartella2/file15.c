#include <stdio.h>
int main()
{
    int x=0;
    int y;
    
    while(x<100){
       
        x=x+1;
        y=y+x;
        
    }
    printf("%d\n", y);
    return(0);
}