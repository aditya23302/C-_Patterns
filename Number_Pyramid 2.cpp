#include <iostream>

using namespace std;

int main()
{
    int l=9;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<l-i;j++)
        {
            cout<<" ";
        }
        for(int k=i;k>=1;k--)
        {
            cout<<k<<" ";
        }
        for(int m=2;m<=i;m++)
        {
            cout<<m<<" ";
        }
        cout<<"\n";
        l--;
    }
    
    for(int i=4;i>=1;i--)
    {
        for(int m=0;m<l-i+2;m++)
        {
           cout<<" "; 
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(int k=2;k<=i;k++)
        {
            cout<<k<<" ";
        }
       
        cout<<"\n";
        l++;
    }
}