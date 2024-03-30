#include<iostream>
using namespace std;
int main()
{
    int A[]={2,34,56,2,-34,-67,-2,5,-13};
    int pcount=0;
    int ncount=0;

    for(int x:A)
    {
        if(x<0)

        ncount++;

        else

        pcount++;
    }

    cout<<"+ve numbers are "<<pcount<<endl;
    cout<<"-ve numbers are "<<ncount;

}