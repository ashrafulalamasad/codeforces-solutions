#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> s(n), t(n);
        for(ll i = 0; i < n; i++){
            cin >> s[i];
            s[i] = min(s[i] % k, k - s[i] % k);
        }
        for(ll i = 0; i < n; i++){
            cin >> t[i];
            t[i] = min(t[i] % k, k - t[i] % k);
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
