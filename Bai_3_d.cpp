#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float fx(float x){
    return (x*cos(x)*x - 2*x*x +3*x -1);
}

int main()
{
    float a, b, e, x0, x;
    
    a = 0.2;
    b = 0.3;
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
