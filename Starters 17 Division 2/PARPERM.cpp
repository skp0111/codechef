#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod=1e9+7;
long long INF =1000000000000000000;
struct mycmp{
    bool operator()(pair<int,int>a,pair<int,int>b)const{
        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
    }
};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector <ll>mark(100001,1);
    vector <ll>cnt(100001,1);
    for(int i=2;i<=100000;i++){
        if(cnt[i]==1)
        cnt[i]=i;
        for(int j=i+i;j<=100000;j+=i){
            mark[j]=0;
            if(cnt[j]==1)
            cnt[j]=i;
        }
    }
    int t=1;cin>>t;
    while(t--){
        ll n,sum;cin>>n>>sum;
        ll k=sum;
        vector <ll>p1;
        if(sum==n-1){
            cout<<"YES\n";
            for(int i=2;i<=n;i++)
            cout<<i<<" ";
            cout<<"\n";
        }
        else if(n==3){
            cout<<"YES\n";
            if(k==1)
            cout<<3<<"\n";
            else if(k==2)
            cout<<1<<" "<<2<<"\n";
        }
        else if(n==4){
            cout<<"YES\n";
            if(k==1)
            cout<<3<<"\n";
            else if(k==2)
            cout<<3<<" "<<1<<"\n";
        }
        else{
            ll y=n/2+1;
            ll cnt=0;
            set <ll>s;
            s.insert(1);
            for(int i=y;i<=n;i++)
            if(mark[i])
            ++cnt,s.insert(i);
            ll p=0;
            for(int i=1;i<=cnt+1;i++){
                if(sum==i || sum==n-i){
                    ++p;
                    cout<<"YES\n";
                    if(sum==i){
                        ll j=i;
                        while(j--){
                            cout<<*(s.begin())<<" ";
                            s.erase(s.begin());
                        }
                        cout<<"\n";
                        break;
                    }
                    else{
                        ll u=0;
                        for(int j=n;j>=1;j--){
                            if(u==i)
                            cout<<j<<" ";
                            else{
                                if(s.find(j)!=s.end()){
                                    s.erase(j);
                                    ++u;
                                }
                                else
                                cout<<j<<" ";
                            }}
                        cout<<"\n";
                        break;
                    }}}
            if(!p)
            cout<<"NO\n"<<"\n";
}}}