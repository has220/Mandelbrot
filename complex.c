//preprocessor directives
#include <stdio.h>
#include <math.h>
#include "complex.h"   //complex header file



/*
 * Returns sum of complex values c1 and c2
 */

complex_t
add_complex(complex_t c1, complex_t c2) /* input values to add */
{
    complex_t csum;

    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;


    return (csum);


}



 /*
  * Returns difference c1 - c2
  */

complex_t
subtract_complex(complex_t c1, complex_t c2) /* input parameters */
{
    complex_t cdiff;
    cdiff.real = c1.real - c2.real;
    cdiff.imag = c1.imag - c2.imag;

    return (cdiff);


}



/* ** Stub **
 * Returns product of complex values c1 and c2
 */

complex_t
multiply_complex(complex_t c1, complex_t c2)
{
    complex_t cmult;
    cmult.real = (c1.real * c2.real) - (c1.imag * c2.imag); //multiply both real parts and imaginary parts
    cmult.imag = (c1.real * c2.imag) + (c1.imag * c2.real); //multiply real parts with imaginary parts and add them


    return (cmult);


}



/*
 * Returns absolute value of complex number c
 */

complex_t
abs_complex(complex_t c)
{
    complex_t cabs;

    cabs.real = sqrt((c.real * c.real) + (c.imag * c.imag));
    cabs.imag = 0;

    return (cabs);

}

