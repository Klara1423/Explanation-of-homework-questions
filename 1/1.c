#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
    scanf("%d %d %d", &a, &b, &c);
    x = (a < b ? a : b) < c ? (a < b ? a : b) : c; 
    z = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    y = a + b + c - x - z;

    if (x + y <= z) 
    {
        printf("Not triangle\n");
    }
    else 
    {
        if (x * x + y * y == z * z) printf("Right triangle\n");
        else if (x * x + y * y > z * z) printf("Acute triangle\n");
        else if (x * x + y * y < z * z) printf("Obtuse triangle\n");

        if(x == y || y == z || x == z)  printf("Isosceles triangle\n");

        if(x == y && y == z)  printf("Equilateral triangle\n");
    }

    return 0;
}