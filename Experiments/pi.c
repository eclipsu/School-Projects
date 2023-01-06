#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include <math.h>

int main() {
    srand((unsigned int)time(NULL));

    unsigned long long dotsInsideCircle = 0, totalDots = 1000000000;
    unsigned int i;
    double dotX, dotY;
    
    for(i = 0; i <= totalDots; i++) {
        dotX = (float)rand()/(float)(RAND_MAX) * 1;
        dotY = (float)rand()/(float)(RAND_MAX) * 1;
        if((dotX * dotX + dotY * dotY) <= 1)
            dotsInsideCircle++;
    }
    printf("Aproximated value of pi: \n%Lf", 4 * (double)dotsInsideCircle / totalDots);

    return 0;
}
