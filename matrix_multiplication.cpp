#include<iostream>
using namespace std;
int main()
{
    int k,i,j,r1,c1,r2,c2;
    int A[10][10],B[10][10],C[10][10];
    
cout<<"type row and columns of matrix A"<<endl;
         cin>>r1>>c1;
cout<<"type row and columns of matrix A"<<endl;
         cin>>r2>>c2;

         
         
 if (c1!=r2)
 {
 cout<<"Cant be Multiplied"; 
 return 0; 
}
else
    {            
    for(i=0;i<r1;++i)
    
        for(j=0;j<c1;++j)
    
       { 
        
        cout<<"a"<<i+1<<j+1<<" number: ";
        cin>>A[i][j];
        
        
    }
    
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    {
        
        cout<<"b"<<i+1<<j+1<<" number: ";
        cin>>B[i][j];
        
    }
    
    for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
    C[i][j]=0;

    for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
    for(k=0;k<c1;k++)
    {
        C[i][j]+=A[i][k]*B[k][j];
        
        
    }
    
 for(i = 0; i < r1; ++i)
 for(j = 0; j < c2; ++j)
 {
 cout << "multiplication is : " << C[i][j];
 
 cout << endl;
 }}
    return 0;
}