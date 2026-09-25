#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> costR(n, 0), costL(n, 0);
        costR[0] = 1; costL[n - 1] = 1;
        for(ll i = 1; i < n - 1; i++){
            if(a[i + 1] - a[i] < a[i] - a[i - 1]) costR[i] = 1;
            else costR[i] = a[i + 1] - a[i];
            if(a[i] - a[i - 1] < a[i + 1] - a[i]) costL[i] = 1;
            else costL[i] = a[i] - a[i - 1];
        }
        vector<ll> preR(n, 0), preL(n, 0);
        for(ll i = 0; i < n - 1; i++) preR[i + 1] = preR[i] + costR[i];
        for(ll i = 1; i < n; i++) preL[i] = preL[i - 1] + costL[i];
        ll m; cin >> m;
        for(ll i = 0; i < m; i++){
            ll x, y; cin >> x >> y;
            x--; y--;
            if(x < y) cout << preR[y] - preR[x] << endl;
            else cout << preL[x] - preL[y] << endl;
        }
    }
    return 0;
}
