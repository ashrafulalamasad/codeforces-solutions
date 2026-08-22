#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s, t; cin >> n >> s >> t;
    ll bal = 0, mx = 0, mn = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '1'){
            bal++;
        }
        if(t[i] == '1'){
            bal--;
        }
        if(bal > mx){
            mx = bal;
        }
        if(bal < mn){
            mn = bal;
        }
    }
    if(bal != 0){
        cout << -1 << endl;
    }else{
        cout << mx - mn << endl;
    }
    return 0;
}
