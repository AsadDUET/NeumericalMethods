#include<iostream>
using namespace std;

float f(float x);

float x1=-1;
float x2=7;
float x0;
float e=0.0001;

int main()
{
    cout<<f(x1)<<endl;
    cout<<f(x2)<<endl;

    if((f(x1)*f(x2))<0)
    {
        cout<<"Root available in this region.";

    }
    else
    {
        cout<<"Root Not available in this region.";
    }

}

float f(float x)
{

    return x*x-4*x-10;
}

