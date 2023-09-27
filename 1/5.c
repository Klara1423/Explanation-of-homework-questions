#include <stdio.h>
int main()
{
    int n = 0, n1 = 0, v1 = 0, n2 = 0, v2 = 0, n3 = 0, v3 = 0;
    int x = 0, y = 0, z = 0, ans = 0;
    scanf("%d %d %d %d %d %d %d", &n, &n1, &v1, &n2, &v2, &n3, &v3);

    if (n % n1 == 0) x = (n / n1) * v1;
    else x = (n / n1 + 1) * v1; 

    if (n % n2 == 0) y = (n / n2) * v2;
    else y = (n / n2 + 1) * v2; 

    if (n % n3 == 0) z = (n / n3) * v3;
    else z = (n / n3 + 1) * v3; 

    ans = (x < y ? x : y) < z ? (x < y ? x : y) : z;

    printf("%d", ans);
    return 0;
}