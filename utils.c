#include <stdio.h>
#include <math.h>
#include "utils.h"
#define EARTH_RADIUS_KM 6371.0

double degreesToRadians (double degree)
{
    return degree * M_PI / 180.0;
}
double getAirDistance(double originLatitude,double originLongitude, double destinationLatitude, double destinationLongitude)
{
    double deltaLongitude = degreesToRadians(destinationLongitude - originLongitude);
    originLatitude = degreesToRadians(originLatitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
double formula = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(deltaLongitude));
return EARTH_RADIUS_KM * formula;
}

double lorentzTimeDialation (double time, double percentC)
{
 double c = 299792458.0;
 double result = percentC / 100.0;
 double lorentzFactor = 1.0/sqrt(1.0 - result * result);
 return time / lorentzFactor;   
}


