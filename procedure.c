#include <stdio.h>
void imprime_tab (int *tab, int nb_elements)
{
int i;
for (i = 0; i < nb_elements; i++)
printf("%d \t",tab[i]);
printf("\n");
return;
}
int t[5] = {3,4,7,2,1};
main(){
    imprime_tab(t, 5);
}
