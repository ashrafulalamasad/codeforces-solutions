#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        vector<ll> l(k), r(k);
        for(ll i = 0; i < k; ++i) cin >> l[i];
        for(ll i = 0; i < k; ++i) cin >> r[i];
        ll q; cin >> q;
        vector<ll> diff(n + 2, 0);
        for(ll i = 0; i < q; ++i){
            ll x; cin >> x;
            ll idx = upper_bound(l.begin(), l.end(), x) - l.begin() - 1;
            ll L = l[idx], R = r[idx];
            ll a = min(x, L + R - x);
            diff[a]++;
        }
        s = " " + s;
        for(ll i = 0; i < k; ++i){
            ll L = l[i], R = r[i];
            ll running = 0;
            for(ll p = L; p <= L + (R - L) / 2; ++p){
                running += diff[p];
                if(running & 1) swap(s[p], s[L + R - p]);
            }
        }
        cout << s.substr(1) << endl;
    }
    return 0;
}
