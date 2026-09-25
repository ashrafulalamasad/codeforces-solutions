#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        if(cnt[0] == 0) cout << "NO" << endl;
        else if(cnt[1] > 0 || cnt[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
