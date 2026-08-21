#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x, y; cin >> n >> x >> y;
    if(y < n){
        cout << -1 << endl;
        return 0;
    }
    ll k = y - n + 1;
    ll max_sq = k * k + n - 1;
    if(max_sq < x){
        cout << -1 << endl;
        return 0;
    }
    cout << k << endl;
    for(ll i = 0; i < n - 1; i++){
        cout << 1 << endl;
    }
    return 0;
}
