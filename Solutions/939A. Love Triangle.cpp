#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> f(n + 1);
    for(ll i = 1; i <= n; i++) cin >> f[i];
    for(ll i = 1; i <= n; i++){
        if(f[f[f[i]]] == i){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
