#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> r(a.rbegin(), a.rend());
        vector<ll> s = r; s.push_back(0);
        for(ll i = n - 1; i >= 0; i--) s.push_back(r[i]);
        ll m = s.size(); vector<ll> z(m, 0);
        for(ll i = 1, l = 0, rr = 0; i < m; i++){
            if(i <= rr){
                z[i] = min(rr - i + 1, z[i - l]);
            }
            while(i + z[i] < m && s[z[i]] == s[i + z[i]]){
                z[i]++;
            }
            if(i + z[i] - 1 > rr){
                l = i;
                rr = i + z[i] - 1;
            }
        }
        set<ll> bad; bad.insert(r[0]);
        for(ll p = 1; p <= n - 1; p++){
            if(z[n + 1 + n - p] == p){
                bad.insert(r[p]);
            }
        }
        ll x = 0;
        for(ll v = 1; v <= n; v++){
            if(!bad.count(v)){
                x = v;
                break;
            }
        }
        cout << x << " "; a.push_back(x);
        for(ll j = 1; j < k; j++){
            ll sz = a.size(); set<ll> bad2;
            bad2.insert(a[sz - 1]);
            bad2.insert(a[sz - 2]);
            ll v = 1;
            while(bad2.count(v)){
                v++;
            }
            cout << v << " ";
            a.push_back(v);
        }
        cout << endl;
    }
    return 0;
}
