#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll na = count(s.begin(), s.end(), 'A');
        ll nb = count(s.begin(), s.end(), 'B');
        if(!na || !nb) { cout << 0 << endl; continue; }
        vector<ll> idx;
        idx.push_back(-1);
        for(ll i = 0; i < (ll)s.size(); i++){
            if(s[i] == 'B'){
                idx.push_back(i);
            }
        }
        idx.push_back(s.size());
        vector<ll> v;
        for(ll i = 0; i < (ll)idx.size()-1; i++){
            v.push_back(idx[i+1] - idx[i] - 1);
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for(auto x : v) ans += x;
        cout << ans - v[0] << endl;
    }
    return 0;
}
