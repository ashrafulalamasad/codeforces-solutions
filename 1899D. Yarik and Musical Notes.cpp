#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        map<ll,ll> cnt;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        ll ans = 0;
        for(auto &p:cnt){
            ll f=p.second;
            ans += f*(f-1)/2;
        }
        if(cnt.count(1) && cnt.count(2)){
            ans += cnt[1]*cnt[2];
        }
        cout << ans << endl;
    }
    return 0;
}
