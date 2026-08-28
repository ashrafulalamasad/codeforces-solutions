#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size();
        ll lo = min(s[0], s[n - 1]), hi = max(s[0], s[n - 1]);
        vector<pair<ll, ll>> mid;
        for(ll i = 1; i < n - 1; i++){
            if(s[i] >= lo && s[i] <= hi) mid.push_back({s[i], i + 1});
        }
        if(s[0] <= s[n - 1]) sort(mid.begin(), mid.end());
        else sort(mid.rbegin(), mid.rend());
        cout << hi - lo << " " << (ll)mid.size() + 2 << endl;
        cout << 1;
        for(auto p : mid) cout << " " << p.second;
        cout << " " << n << endl;
    }
    return 0;
}
