#include <iostream>
using namespace std;

int main()
{
    long long int T,l,r,i,d,c;
    cin >>T;
    for(i=0; i<T; i++)
    {
        cin >>l >>r;
        while (l%3!=0 && l<r)
        {
            l++;
        }
        d=r-l;
        if(l==r && l%3!=0)
        {
            c=0;
        }
        else
        {
            c=d/3+1;
        }
        cout <<c <<endl;
    }
	return 0;
}