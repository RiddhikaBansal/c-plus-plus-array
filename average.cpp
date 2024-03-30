#include<iostream>
using namespace std;
int main()
{
    int n,i,A[2],average,sum;
    sum=0;
                    
    cout<<"enter number of elements: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<i+1<<" number: ";
        cin>>A[i];
        sum=sum+A[i];
    }

    average=sum/n;
    cout<<"average= "<<average;

    return 0;
}