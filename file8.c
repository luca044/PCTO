#include <stdio.h>
int main()
{
    printf("scegli un numero\n");
    int n;
    scanf("%d", &n);
    printf("scegline un altro\n");
    int n1;
    scanf("%d", &n1);
    int n2 = n%n1;
    if(n2==0){
        printf("%d è multiplo di %d\n", n,n1);
    } else{
        printf("%d non è multiplo di %d\n", n,n1);
    }
    return(0);
}