#include<iostream>
#include<cmath>
using namespace std;

float f(float x);

float x1;
float x2;
float x0;
float e;

int main()
{
    cout<<"Enter Lower limit:";
    cin>>x1;
    cout<<"Enter Upper Limit: ";
    cin>>x2;
    cout<<"Enter Stopping criteria: ";
    cin>>e;
    cout<<"f(x1)= "<<f(x1)<<endl;
    cout<<"f(x2)= "<<f(x2)<<endl;

    if((f(x1)*f(x2))<0)
    {
        cout<<"So, Root is available in the bracket\nLooping..."<<endl;
        while((abs(x1-x2))>=e)
        {
            x0=x1+f(x1)*(x2-x1)/(f(x2)-f(x1));
            if(f(x0)==0){
                x1=x0;
                x2=x0;
                break;
            }
            if((f(x1)*f(x0))<0)
                x2=x0;
            else
            {
                x1=x0;
            }
        //cout<<x0<<endl;
        }
        cout<<"The Root is: "<<(x1+x2)/2<<endl;
    }
    else
    {
        cout<<"Root Not available in this Bracket.";
    }
}
float f(float x)
{
    return x*x-4*x-10;
}

