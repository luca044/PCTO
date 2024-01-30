#include <stdio.h>
int main(){
    printf("inserisci una temperature in gradi celsius\n");
    float n;
    scanf("%f", &n);
    float n1=n + 273.15;
    
    float n2=(n*9/5)+32;
    
    if(n< -273.15){
        printf("ERROR-404\n");
    } else{
        printf("la tua temperatura in fahrenheit è %f\n", n2);
        printf("la tua temperatura in gradi kelvin è %f\n", n1);
    } 
    return(0);
}