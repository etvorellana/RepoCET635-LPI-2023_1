#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    double pi;
    int qPts, qPtsNoCir = 0;
    double x, y;
    srand(time(NULL));

    qPts = 1000000000;

    for (int i = 0; i < qPts; i++)
    {
        x = -1 + 2.0 * rand() / RAND_MAX;
        y = 2.0 * rand()/ RAND_MAX - 1;

        if (x * x + y * y <= 1)
            qPtsNoCir++;
    }

    pi = 4.0 * qPtsNoCir / qPts;

    printf("pi calculado = %lf, pi = %lf, erro = %lf\n", pi, M_PI, M_PI - pi);

    return 0;
}