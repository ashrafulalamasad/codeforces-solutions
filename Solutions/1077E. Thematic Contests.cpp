#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; map<ll, ll> cnt;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        cnt[x]++;
    }
    vector<ll> cnts; ll ans = 0;
    for(auto p : cnt) cnts.push_back(p.second);
    sort(cnts.begin(), cnts.end());
    for(ll i = 1; i <= cnts.back(); i++){
        ll pos = cnts.size() - 1;
        ll cur = i, res = cur;
        while(cur % 2 == 0 && pos > 0){
            cur /= 2;
            pos--;
            if(cnts[pos] < cur) break;
            res += cur;
        }
        ans = max(ans, res);
    }
    cout << ans << endl;
    return 0;
}
