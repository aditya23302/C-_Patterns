#include <iostream>

using namespace std;

int main()
{
    int l=10;
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
}