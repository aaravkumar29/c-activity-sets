#include <stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a, b, c, largest;
    input(&a, &b, &c);
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}

void input(int *a, int *b, int *c)
{
    printf("Enter first number: ");
    scanf("%d", a);
    printf("Enter second number: ");
    scanf("%d", b);
    printf("Enter third number: ");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest)
{
    *largest = a;
    if (b > *largest)
    {
        *largest = b;
    }
    if (c > *largest)
    {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest number amongst %d, %d, and %d is %d\n", a, b, c, largest);
}
