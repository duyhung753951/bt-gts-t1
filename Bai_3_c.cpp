#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float fx(float x){
    return (2*x*cos(2*x) - pow(x+1,2));
}
float giaipt(float a, float b);

int main()
{
    cout << "nghiem x1 = " << giaipt(-3,2) << endl;
    cout << "nghiem x2 = " << giaipt(-1,0);
    return 0;
}

float giaipt(float a, float b){
    float e = 0.0000001;
    float x0;
    while((b-a)>=e){
        x0=(a+b)/2;
        if(fx(a)*fx(x0) > 0){
            a = x0;
        }else{
            b = x0;
        }
    }
    return x0;
}
