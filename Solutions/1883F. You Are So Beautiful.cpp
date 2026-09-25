#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n), L, R;
        for(ll i = 0; i < n; i++) cin >> a[i];
        map<ll, ll> firstPos, lastPos;
        for(ll i = 0; i < n; i++){
            if(!firstPos.count(a[i])) firstPos[a[i]] = i;
            lastPos[a[i]] = i;
        }
        for(ll i = 0; i < n; i++){
            if(firstPos[a[i]] == i) L.push_back(i);
            if(lastPos[a[i]] == i) R.push_back(i);
        }
        for(ll l : L){
            ll cnt = R.end() - lower_bound(R.begin(), R.end(), l);
            ans += cnt;
        }
        cout << ans << endl;
    }
    return 0;
}
