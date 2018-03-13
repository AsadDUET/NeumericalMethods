#include<iostream>
#include<cmath>
using namespace std;

float f(float x);

float x1=-1;
float x2=20;
float x0;
float e=0.000001;

int main()
{
    cout<<"Enter Lower limit:";
    cin>>x1;
    cout<<"Enter Upper Limit: ";
    cin>>x2;
    cout<<"Enter Stopping criteria: ";
    cin>>e;
    cout<<f(x1)<<endl;
    cout<<f(x2)<<endl;

    if((f(x1)*f(x2))<0)
    {
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

    return x*x-5;
}

