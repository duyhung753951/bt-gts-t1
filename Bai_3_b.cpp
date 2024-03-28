#include<iostream>
#include<math.h>
using namespace std;

float fx(float x){
    return (exp(x)-x*x+3*x-2);
}

int main()
{
    float a, b, e, x0, x;
    
    a = 0;
    b = 1;
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

