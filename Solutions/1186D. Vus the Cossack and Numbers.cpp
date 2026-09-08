#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> b(n);
    vector<bool> frac(n); ll sum = 0;
    for(ll i = 0; i < n; i++){
        long double x; cin >> x;
        b[i] = floorl(x);
        frac[i] = (b[i] != x);
        sum += b[i];
    }
    ll need = -sum;
    for(ll i = 0; i < n && need > 0; i++){
        if(frac[i]){
            b[i]++;
            need--;
        }
    }
    for(ll i = 0; i < n; i++){
        cout << b[i] << endl;
    }
    return 0;
}
