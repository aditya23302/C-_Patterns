#include <iostream>

using namespace std;

int main()
{
    int l=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<5;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        l--;
    }
}

/*
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * * 



*/