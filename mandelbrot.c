#include <stdio.h>
#include <math.h>
#include "complex.h"       //include the complex header
#include "mandelbrot.h"    //include mandelbrot header


//define mandelbrot function
complex_t
mandelbrot(int n, complex_t my_c)
{
    complex_t tmp;   //declare complex variable for temporary storage


    //if n is less than 0, return the complex variable my_c
    if (n <= 0)
    {
        return (my_c);
    }


    //recursive step
    tmp = mandelbrot(n-1, my_c);

    //check if the absolute value of tmp is greater than 1000
    if ((abs_complex(tmp).real) > 1000)
    {
        tmp.real = 100;     //both real and imaginary parts equal 100
        tmp.imag = 100;     //the set is bounded up to these points

    }




    else
    {

        //multiply both mandelbrot functions
        tmp = multiply_complex(tmp, tmp);

        //add the result of the multiplication to the complex constant my_c
        tmp = add_complex(tmp, my_c);

    }





    //output of this function is the tmp variable
    return (tmp);
}

