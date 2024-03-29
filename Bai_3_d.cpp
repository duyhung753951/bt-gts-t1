#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float fx(float x){
    return (x*cos(x)*x - 2*x*x +3*x -1);
}
float giaipt(float a, float b);

int main()
{
    cout << "nghiem x1 = " << giaipt(0.2,0.3) << endl;
    cout << "nghiem x2 = " << giaipt(1.2,1.3);
    return 0;
}

float giaipt(float a, float b){
    float e = 0.00001;
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
