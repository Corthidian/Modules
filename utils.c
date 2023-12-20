#include <stdio.h>
#include <math.h>
#include "utils.h"
#define EARTH_RADIUS 6371.0

double degreesToRadians (double degree)
{
    return degree * M_PI / 180.0;
}
double getAirDistance(double originLatitude,double originLongitude, double destinationLatitude, double destinationLongitude)
{
    double deltaLongitude = degreesToRadians(destinationLongitude - originLongitude);
    originLatitude = degreesToRadians(originLatitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
}

