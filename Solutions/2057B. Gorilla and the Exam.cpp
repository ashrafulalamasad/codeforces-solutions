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
        sort(a.begin(), a.end());
        vector<ll> cnt;
        for(ll i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i - 1]) cnt.push_back(1);
            else cnt.back()++;
        }
        sort(cnt.begin(), cnt.end());
        ll ans = cnt.size();
        for(ll i = 0; i + 1 < (ll)cnt.size(); i++){
            if(cnt[i] > k) break;
            k -= cnt[i];
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}
