#include<iostream>
#include<math.h>
#define PiUnder180 5.72957795130823E+001
#define PiOver180 1.74532925199433E-002
using namespace std;
typedef enum { False , True } boolean;
int Round(float x){
    return ((int)(x+0.5));
}
int Trunc(float x){
    return (int)x;
}
float SqrFP(float x){
    return x*x;
}
float Radians(float Angle){
    return (Angle*PiOver180);
}
float Degrees(float Angle){
    return(Angle*PiUnder180);
}
int Sqr(int x){
    return x*x ;
}
float CosD(float a){
    return cos(Radians(a));
}
float SinD(float a)
{
    return sin(Radians(a));
}
float Power(float b,int ex){
    float bp=1;
    if (ex==0){
        return 1;
    }
    else{
        for(int i=0;i<ex;i++){
            bp=bp*b;
        }
        return bp;
    }
    
}
float Log(float x){
    return log(x)/log(10);
}
float Exp10(float c){
    return exp(c*log(10));
}
float Sign(float x){
    return (x>0)?1:((x<0)?(-1):0);
}
int IntSign(int x)
{
    return (x > 0) ? 1 : ((x < 0) ? (-1) : 0);
}
int IntSqrt(int x){
    int  od=1,fs,y=x;
    while (x>0)
    {x=x-od;
    od=od+2;
    }
    fs=od/2;
    if (Sqr(fs)>x)
    {
        fs=fs-1;
    }
    
    return fs;
}
int main(){
    float c;
    cout<<IntSqrt(69);
}