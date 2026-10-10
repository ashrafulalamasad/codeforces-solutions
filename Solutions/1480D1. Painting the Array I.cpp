#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n), ptr(n + 1, 0);
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<vector<ll>> pos(n + 1);
    for(ll i = 0; i < n; i++) pos[a[i]].push_back(i);
    ll x = 0, y = 0, ans = 0;
    for(ll i = 0; i < n; i++){
        ll z = a[i];
        if(z != x && z != y){
            ans = ans + 1;
            while(ptr[x] < (ll)pos[x].size() && pos[x][ptr[x]] <= i) ptr[x] = ptr[x] + 1;
            while(ptr[y] < (ll)pos[y].size() && pos[y][ptr[y]] <= i) ptr[y] = ptr[y] + 1;
            ll nx = n + 5, ny = n + 5;
            if(ptr[x] < (ll)pos[x].size()) nx = pos[x][ptr[x]];
            if(ptr[y] < (ll)pos[y].size()) ny = pos[y][ptr[y]];
            if(nx < ny) x = z; else y = z;
        }else if(z == x && z != y){
            y = z;
            ans = ans + 1;
        }else if(z == y && z != x){
            x = z;
            ans = ans + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
