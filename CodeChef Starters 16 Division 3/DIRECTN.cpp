#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >>t;
    string str;
    while(t--){
        cin >>n;
        cin >>str;
        int f=0;
        for(int i=0; i<n-1; i++){
            
            if(str[i]==str[i+1])
            {
                cout <<"YES" <<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        cout <<"NO" <<endl;
    }
    return 0;
}