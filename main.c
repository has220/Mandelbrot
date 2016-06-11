/*
Spring 2015

Program that implements the Mandelbrot set and
prints the fractal image.


*/


//preprocessor directives
#include <stdio.h>
#include <math.h>
#include "complex.h"   //include the complex header file
#include "mandelbrot.h" //include the mandelbrot header file




/*   Driver      */
//main function
int
main(void)
{
    complex_t my_num;           //complex variable for mandelbrot function call
    complex_t check_mand_func;     //complex variable for storing the value of the mandelbrot function call

    char picture_grid[80][45];  //2d array for storing and printing the image
    int row_x, col_y;         //variables for the real axis (row_x) and imaginary axis (col_y)
    int i, j;            //variables for iterating through the 2d array and printing out the characters

    my_num.real = -2.1;   //points on the real axis start at -2.1
    my_num.imag = -1.2;   //points on the imaginary axis starts at -1.2



    /*Store data into the picture_grid array*/

    for (row_x = 0; row_x < 80; row_x++)   //iterate through the real axis
    {

        my_num.real = my_num.real + 0.032;    //increment points on the real axis


        for (col_y = 0; col_y < 45; col_y++)  //iterate through the imaginary axis
        {

            my_num.imag = my_num.imag + 0.05;  //increment points on the imaginary axis


            check_mand_func = mandelbrot(15, my_num);  //call mandelbrot function


            if ((abs_complex(check_mand_func).real) > 100)   //if absolute value is greater than 100, the point is not in the mandelbrot set
            {
                picture_grid[row_x][col_y] = '-';   //store an empty space (represented by '-') into the array

            }


            else                        //if absolute value is less than 100 the point is in the mandelbrot set
            {
                picture_grid[row_x][col_y] = '#';    //store a pound sign (#) to represent a point in the set


            }


        }


        my_num.imag = -1.15;   //move the picture along the imaginary axis
       //image is now directly centered in the 80*45 grid

    }





    /*Print data from picture grid array*/

    for (j = 0; j < 45; j++)         //iterate through the outer array (imaginary axis)
    {
        for (i = 0; i < 80; i++)     //iterate through the inner array (real axis)
        {
            printf("%c", picture_grid[i][j]);   //print the characters stored in the array
        }
    
    printf("\n");  //print newline after each row

    }








    //return value of 0
    return (0);

}
