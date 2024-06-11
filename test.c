#include <math.h>
#include <stdio.h>
#define M_pl 3.141592653589793
int main(void)
{
    double two_pi = 2.0 * M_pl; /*in math.h*/
    double h = 0.1;             /*step size*/
    double x;
    for (x = 0.0; x < two_pi; x += h)
        printf("%5.1f: %.15e\n",
               x, sin(x) * sin(x) + cos(x) * cos(x));
    return 0;
}