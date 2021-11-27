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
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector <pair<ll,string>>v;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            ll cnt=0;
            for(int j=0;j<m;j++)
            if(s[j]=='0')
            ++cnt;
            v.pb({-cnt,s});}
        sort(v.begin(),v.end());
        string a="";
        for(int i=0;i<n;i++)
        a+=v[i].second;
        ll cnt=0;
        for(int i=0;i<n*m;i++)
        if(a[i]=='0')
        ++cnt;
        ll ans=0;
        for(int i=0;i<n*m;i++){
            if(a[i]=='1'){
                ans+=cnt;}
            else
            --cnt;}
        cout<<ans<<"\n";
}}