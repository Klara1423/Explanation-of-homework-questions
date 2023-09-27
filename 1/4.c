#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
    char x = 0, y = 0, z = 0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("\n%c%c%c", &x, &y, &z);

    A = (a < b ? a : b) < c ? (a < b ? a : b) : c; 
    C = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    B = a + b + c - A - C;

    if (x == 'A' && y == 'B' && z =='C') printf("%d %d %d", A, B, C);
    else if (x == 'A' && y == 'C' && z =='B') printf("%d %d %d", A, C, B);
    else if (x == 'B' && y == 'A' && z =='C') printf("%d %d %d", B, A, C);
    else if (x == 'B' && y == 'C' && z =='A') printf("%d %d %d", B, C, A);
    else if (x == 'C' && y == 'B' && z =='A') printf("%d %d %d", C, B, A);
    else if (x == 'C' && y == 'A' && z =='B') printf("%d %d %d", C, A, B);

    return 0;
}