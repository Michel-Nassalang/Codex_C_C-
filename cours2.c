#include <stdio.h>
#define N 10
main()
{
int tab[N];
int i;
for (i = 0; i < N; i++){
tab[i]= i*5;
printf("tab[%d] = %d\n",i,tab[i]);
}
}