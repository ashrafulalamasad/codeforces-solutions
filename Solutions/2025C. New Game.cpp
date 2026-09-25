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
        vector<ll> vals, cnt;
        for(ll i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i - 1]){
                vals.push_back(a[i]);
                cnt.push_back(1);
            }else cnt.back()++;
        }
        ll ans = 0, cur = 0, l = 0;
        for(ll r = 0; r < (ll)vals.size(); r++){
            if(r > 0 && vals[r] != vals[r - 1] + 1){
                l = r; cur = cnt[r];
            }else{
                cur += cnt[r];
                while(r - l + 1 > k){
                    cur -= cnt[l]; l++;
                }
            }
            if(cur > ans) ans = cur;
        }
        cout << ans << endl;
    }
    return 0;
}
