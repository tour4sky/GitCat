#include <Turboc.h>
#include <math.h>

#define banollim(x,dig) (floor((x)*pow(10.0,dig)+0.5)/pow(10.0,dig))

void main(void)
{
    double x=123.456789;
    int i;
    for (i=-2;i<5;i++) 
    {
        printf("%f�� %d�ڸ� �ݿø� = %f \n", x, i, banollim(x, i));
    }
}
 