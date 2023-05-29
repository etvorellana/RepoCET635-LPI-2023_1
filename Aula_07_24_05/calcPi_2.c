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
    qPts = 100;
    for(int j = 1; j <= 7; j++){
        qPts *= 10;
        qPtsNoCir = 0;
        for (int i = 0; i < qPts; i++){
            x = -1 + 2.0 * rand() / RAND_MAX;
            y = 2.0 * rand()/ RAND_MAX - 1;
            if (x * x + y * y <= 1)
                qPtsNoCir++;
        }
        pi = 4.0 * qPtsNoCir / qPts;
        printf("%d- pi calculado = %lf, pi = %lf, erro = %lf\n",qPts, pi, M_PI, M_PI - pi);
    }

    return 0;
}