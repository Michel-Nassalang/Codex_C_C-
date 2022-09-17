#include <stdio.h>
#include <math.h>
struct complexe
{
double reelle;
double imaginaire;
};
main()
{
struct complexe z;
double norme;
norme = sqrt(z.reelle * z.reelle + z.imaginaire * z.imaginaire);
printf("norme de (%f + i %f) = %f \n",z.reelle,z.imaginaire,norme);
}
