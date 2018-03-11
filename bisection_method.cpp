#include<iostream>
#include <cmath>
using namespace std;

float f(float x);

float x1=-1;
float x2=20;
float x0;
float e=0.000001;

int main()
{
    cout<<f(x1)<<endl;
    cout<<f(x2)<<endl;

    if((f(x1)*f(x2))<0)
    {
        //cout<<"Root available in this region.";
        while(abs(x1-x2)>e)
        {
            x0=(x1+x2)/2;
            if((f(x1)*f(x0))<0)
                x2=x0;
            else
            {
                x1=x0;
            }
        cout<<"|"<<x0<<"|"<<endl;
        }

        cout<<"The Root is: "<<(x1+x2)/2<<endl;

    }
    else
    {
        cout<<"Root Not available in this region.";
    }

}

float f(float x)
{

    return x*x-2*x-10;
}

