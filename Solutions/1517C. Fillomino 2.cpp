#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> p(n);
    for(ll i = 0; i < n; i++) cin >> p[i];
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    for(ll i = n - 1; i >= 0; i--){
        ll r = i, c = i, cnt = 1;
        a[r][c] = p[i];
        while(cnt < p[i]){
            if(r + 1 < n && a[r + 1][c] == 0) r++;
            else c--;
            a[r][c] = p[i];
            cnt++;
        }
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j <= i; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
