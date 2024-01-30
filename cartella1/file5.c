#include <stdio.h>
int main()
{
    printf("scrivi la media delle vostre età\n");
    int n;
    scanf("%d", &n);
    printf("quanti siete?\n");
    int n1;
    scanf("%d", &n1);
    int n2 = n * n1;
    printf("in totale avete %d anni\n", n2);
}