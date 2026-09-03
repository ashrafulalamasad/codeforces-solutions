#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll value(vector<ll>& a){
    ll mx = LLONG_MIN, s = 0;
    for(ll i = 0; i < (ll)a.size(); i++){
        mx = max(mx, a[i]); s += mx;
    }
    return s;
}

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll best = value(a);
        for(ll i = 0; i < n; i++){
            for(ll j = i + 1; j < n; j++){
                swap(a[i], a[j]);
                best = max(best, value(a));
                swap(a[i], a[j]);
            }
        }
        cout << best << endl;
    }
    return 0;
}
