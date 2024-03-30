#include<iostream>
using namespace std;
int main()
{
    int A[]={2,43,7,-8,5,9,-7,3};
    int key;
    cout<<"enter key here "<<endl;
    cin>>key;

    for(int i=0;i<10;i++)
    {
        if(key==A[i])
        {
            cout<<"key found at "<<i<<endl;
            return 0;//we have to close loop after checking this condition completely and it's needed to check before
        }}        {
            cout<<"not found";
          
        }

}