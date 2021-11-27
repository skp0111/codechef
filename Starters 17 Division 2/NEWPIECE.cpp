#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define ff          first
#define ss          second
#define pb          push_back
#define endl        '\n'


signed main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



   int tc;
   cin >> tc;

   while(tc--){

       ll a, b, p, q;
       cin >> a >> b >> p >> q;

       if((a+b)%2){
           if((p+q)%2){
               if(a == p and b == q){
                   cout << 0 << endl;
               }else{
                   cout << 2 << endl;
               }
           }else{
               cout << 1 << endl;
           }
       }else{
           if((p+q)%2){
               cout << 1 << endl;
           }else{
               if(a == p and b == q){
                   cout << 0 << endl;
               }else{
                   cout << 2 << endl;
               }
           }
       }


   }

    return 0;
}