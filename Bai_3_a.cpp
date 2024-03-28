#include<iostream>
#include<math.h>
using namespace std;

float fx(float x){
    return (x-pow(2,-x));
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

