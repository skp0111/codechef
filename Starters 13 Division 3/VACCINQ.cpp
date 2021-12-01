#include <iostream>
using namespace std;

int main()
{
    int t,n,p,x,y,i,j,s;
    cin >>t;
    for(i=0; i<t; i++)
    {
        cin >>n >>p >>x >>y;
        int a[n];
        s=0;
        for(j=0; j<n; j++)
        {
            cin >>a[j];
        }
        for(j=0; j<p; j++)
        {
            if(a[j]==0)
            {
                s+=x;
            }
            else if(a[j]==1)
            {
                s+=y;
            }
        }
        cout <<s <<endl;
    }
    return 0;
}