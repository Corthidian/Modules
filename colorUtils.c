
#include "colorUtils.h"
#include <math.h>

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
int min (int x, int y, int z)
{
  return round((x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z));
}

int toGrayScaleLightness (int r , int g , int b)
{
  int max = (r > g) ? ((r > b) ? r : b) : ((g > b) ? g : b);
  int min = (r < g) ? ((r < b) ? r : b) : ((g < b) ? g : b);
  return round((max + min)/2);

}

int toGrayScaleLuminosity (int r, int g, int b)
{
 return(int)round(0.21* r + 0.72* g + 0.07* b);
}

int toSepiaRed(int r, int g, int b)
{
 int result = ((int) round(0.393*r + 0.769*g + 0.189*b));
 return (result < 0) ? 0 :  (result > 255 ) ? 255 : result;
}

int SepiaGreen (int r, int g, int b)
{
 int result = ((int) round(0.349*r + 0.686*g + 0.168*b));
return (result < 0) ? 0 :  (result > 255 ) ? 255 : result;

}




