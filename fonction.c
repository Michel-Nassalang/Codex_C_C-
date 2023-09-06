#include <stdio.h>
int produit (int a, int b)
{
return(a*b);
}

main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int r = produit(a,b);
    printf("%d", r);
}
