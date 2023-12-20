#include <stdio.h>
#include "utils.h"

int main()
{
    double radianResult = degreesToRadians(90.0);
    printf("%.4f\n", radianResult);
    double airDistance = getAirDistance(37.7749, -122.4194, 34.0522, -118.2437);
    printf("%.4f\n", airDistance);
    double dilatedTime = lorentzTimeDialation(1.0, 25.0);
    printf("%.4f\n", dilatedTime);
}