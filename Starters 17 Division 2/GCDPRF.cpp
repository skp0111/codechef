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

       ll n;
       cin >> n;

       vector<ll> arr(n);
       for(int i = 0; i < n; i++){
           cin >> arr[i];
       }


       bool done = true;

       for(int i = 1; i < n; i++){
           if(arr[i] > arr[i-1]){
               done = false;
               break;
           }
       }

       if(!done){
           cout << -1 << endl;
           continue;
       }
       
       vll ans(n);
       ans[0] = arr[0];
       ll prev = ans[0];
       for(int i = 1; i < n; i++){
           if(__gcd(prev, arr[i]) == arr[i]){
               ans[i] = arr[i];
           }else{
               done = false;
               break;
           }
       }
       
       if(!done){
           cout << -1 << endl;
           continue;
       }

       for(auto x: arr){
           cout << x << " ";
       }cout << endl;



   }

    return 0;
}