#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> x(n), v(n);
        for(ll i = 0; i < n; i++){
            cin >> x[i];
            v[i] = x[i];
        }
        sort(v.begin(), v.end());
        vector<ll> pref(n + 1, 0);
        for(ll i = 0; i < n; i++){
            pref[i + 1] = pref[i] + v[i];
        }
        for(ll i = 0; i < n; i++){
            ll val = x[i];
            ll pos = lower_bound(v.begin(), v.end(), val) - v.begin();
            ll left_sum = val * pos - pref[pos];
            ll right_sum = (pref[n] - pref[pos]) - val * (n - pos);
            cout << left_sum + right_sum + n << " ";
        }
        cout << endl;
    }
    return 0;
}
