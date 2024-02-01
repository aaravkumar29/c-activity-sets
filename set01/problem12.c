#include <stdio.h>

struct _complex {
   float real,img;
};
  typedef struct _complex Complex; 
int get_n();
Complex input_complex(); 
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    Complex result;
    int n;
    n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    result=add_n_complex(n,c);
    output(n,c,result);
    return 0;
}
int get_n()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("enter real no: ");
    scanf("%f",&c.real);
    printf("enter img no: ");
    scanf("%f",&c.img);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    for(int i=0;i<n;i++)
    {
        c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real=a.real+b.real;
    result.img=a.img+b.img;
    return result;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result={0,0};
    for(int i=0;i<n;i++)
    {
        result=add(result,c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result)
{
    printf("the sum of real nos are: %f and sum of img nos are %f",result.real,result.img);
}