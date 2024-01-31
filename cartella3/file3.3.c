#include <stdio.h>
int main()
{
    
    float x;
    int y;
     
    
    while(y>0){
        printf("di quanti pezzi è il tuo ordine?\n");
        scanf("%d", &y);
        if(y>30 && y<=50){
        
            x=(5*0.9)*y;
        
        
        

        } else if(y>50){

            x=(5*0.85)*y;
            

        } else if(y>0){
            x=5*y;
            

        } else{
            x=0;
        }
        printf("devi pagare %f£\n", x);
    }
    return(0);
}