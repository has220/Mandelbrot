/*
This is the header file.
The file contains function prototypes and
structure definitions to be used in the complex
and main functions.
*/


//structure definition of type complex
typedef struct
{
    double real, imag;

} complex_t;


//function prototypes
complex_t add_complex(complex_t c1, complex_t c2);
complex_t subtract_complex(complex_t c1, complex_t c2);
complex_t multiply_complex(complex_t c1, complex_t c2);
complex_t abs_complex(complex_t c);



