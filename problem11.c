#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex complex;

complex input_complex();
complex add_complex(complex a, complex b);
void output(complex a, complex b, complex sum);

int main()
{
    complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;

    
}
complex input_complex()
{
    complex  c;
    printf("enter real no\n");
    scanf("%f",&c.real);
    printf("enter imaginary no\n");
    scanf("%f",&c.imaginary);
    return c;
}
complex add_complex(complex a,complex b)
{
    complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(complex a, complex b, complex sum)
{
    printf("the sum of %f+%fi and %f+%fi is %f+%fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);

}

