#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, t; cin >> n >> t;
    if(t == 10){
        if(n == 1) cout << -1 << endl;
        else{
            cout << 1;
            for(ll i = 1; i < n; i++) cout << 0;
            cout << endl;
        }
        return 0;
    }
    cout << t;
    for(ll i = 1; i < n; i++) cout << 0;
    cout << endl;
    return 0;
}
