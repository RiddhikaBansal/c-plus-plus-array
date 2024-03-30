#include<iostream>
using namespace std;
int main()
{
    int A[]={2,4,6,85,97,8};
    int B[]={-2,-3,-4,-5};
    int max=A[0];
    int min=A[0];
    int maxb=B[0];
    for(int x:A)
    {
        if(x>max)
        max=x;
    }
    for(int y:A)
    {
        if(y<min)
        min=y;
    }
    for(int z:B)
    {
        if(z>max)
        maxb=z;
    }

     cout<<"max is "<<max<<endl;
     cout<<"min is "<<min<<endl;
     cout<<"max is "<<maxb<<endl;
}