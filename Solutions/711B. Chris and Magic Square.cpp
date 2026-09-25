#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, r = 0, c = 0; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) r = i, c = j;
        }
    }
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    ll target = 0;
    for(ll i = 0; i < n; i++){
        if(i != r){
            target = 0;
            for(ll j = 0; j < n; j++) target += a[i][j];
            break;
        }
    }
    ll x = target;
    for(ll j = 0; j < n; j++) x -= a[r][j];
    a[r][c] = x;
    if(x < 1){
        cout << -1 << endl;
        return 0;
    }
    for(ll i = 0; i < n; i++){
        ll s = 0;
        for(ll j = 0; j < n; j++) s += a[i][j];
        if(s != target){
            cout << -1 << endl;
            return 0;
        }
    }
    for(ll j = 0; j < n; j++){
        ll s = 0;
        for(ll i = 0; i < n; i++) s += a[i][j];
        if(s != target){
            cout << -1 << endl;
            return 0;
        }
    }
    ll d1 = 0, d2 = 0;
    for(ll i = 0; i < n; i++){
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    if(d1 != target || d2 != target){
        cout << -1 << endl;
        return 0;
    }
    cout << x << endl;
    return 0;
}
