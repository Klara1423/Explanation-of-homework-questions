#include <stdio.h>
int main()
{
    double m = 0, h = 0, bmi = 0;
    scanf("%lf %lf", &m, &h);
    bmi = m / (h * h);

    if (bmi < 18.5) printf("Underweight\n");
    else if (bmi >= 24) printf("%.6g\nOverweight\n", bmi);
    else printf("Normal\n");

    return 0;
}