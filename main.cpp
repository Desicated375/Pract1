#include <stdio.h>

int main()
{
    double t1, t2, t3;
    printf("Enter 3 variables:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double speed1 = 1.0 / t1;
    double speed2 = 1.0 / t2;
    double speed3 = 1.0 / t3;

    double totalSpeed = speed1 + speed2 + speed3;
    double totalTime = 1.0 / totalSpeed;

    printf("Time needed to finish the cake, is %.2f hours\n", totalTime);

    return 0;
}
