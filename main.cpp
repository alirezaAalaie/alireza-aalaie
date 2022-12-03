#include <stdio.h>
#include <stdlib.h>
#include "grader.h"
#include <stdarg.h>
#include <math.h>

long long solve(int n, ...){
    long long int sum=0,a=0,b=0;
    va_list ap;
    va_start(ap,n);
    a=va_arg(ap,long long);
    for (int i=0;i<n-1;i++){

        b=va_arg(ap,long long);
        sum=sum+abs(b-a);
        a=b;


    }
    va_end(ap);




return sum;
}



