#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll query(ll l, ll r){
    if(l == r) return 0;
    cout << "? " << l << " " << r << endl;
    ll res; cin >> res;
    return res;
}

ll solve(ll l, ll r){
    if(l == r) return l;
    ll m = (l + r) / 2;
    ll a = solve(l, m);
    ll b = solve(m + 1, r);
    ll r1, r2;
    r1 = query(a, b - 1);
    r2 = query(a, b);
    if(r1 == r2) return b;
    else return a;
}

int main(){
    fast;
    tc{
        ll n; cin >> n;
        ll ans = solve(1, n);
        cout << "! " << ans << endl;
    }
    return 0;
}
