#include <stdio.h>
int main()
{
    double a = 0, ans = 0;
    scanf("%lf", &a);

    if (a <= 150) ans = a * 0.4463;
    else if (a >= 151 && a <= 400) ans =  150 * 0.4463 + (a - 150) * 0.4663;
    else ans =  150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;

    printf("%.1lf", ans);

    return 0;
}