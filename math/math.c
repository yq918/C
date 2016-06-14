#include <stdio.h>
#include <math.h>
main(){
    float x = 5.6f;
    double xx = 5.6;
    double f = 0.0;
    double h = 0.0;
    
    f= ceil(xx);
    h = ceilf(x);
    printf("ceil:%f, ceilf:%f",f,h);
}