#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float fx(float x){
    return (2*x*cos(2*x) - pow(x+1,2));
}

int main()
{
    float a, b, e, x0, x;
    
    a = -1;
    b = 0;
    e = 0.000001;
    while((b-a)>=e){
        x0=(a+b)/2;
        if(fx(a)*fx(x0) > 0){
            a = x0;
        }else{
            b = x0;
        }
    }
    cout << x0;
    
    return 0;
}

