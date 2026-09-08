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
        vector<array<ll, 3>> ops;
        for(ll i = 0; i < n; i++){
            ll pos = i;
            for(ll j = i + 1; j < n; j++){
                if(a[j] < a[pos]) pos = j;
            }
            if(pos > i){
                ll d = pos - i, len = pos - i + 1;
                vector<ll> seg(a.begin() + i, a.begin() + pos + 1);
                for(ll j = i; j <= pos; j++) a[j] = seg[(j - i + d) % len];
                ops.push_back({i + 1, pos + 1, d});
            }
        }
        ll k = ops.size();
        cout << k << endl;
        for(ll j = 0; j < k; j++) cout << ops[j][0] << " " << ops[j][1] << " " << ops[j][2] << endl;
    }
    return 0;
}
