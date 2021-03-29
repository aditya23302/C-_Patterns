/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
        cout<<"\n";
        l--;
    }
}
