#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, l, r; cin >> n >> k >> l >> r;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> L1(n), L2(n);
        for(ll kk = 0; kk < 2; kk++){
            ll target = k - kk;
            map<ll, ll> cnt;
            ll b = 0, dist = 0;
            for(ll c = 0; c < n; c++){
                if(cnt[a[c]]++ == 0){
                    dist++;
                }
                while(dist > target){
                    if(--cnt[a[b]] == 0){
                        dist--;
                    }
                    b++;
                }
                if(kk == 0){
                    L1[c] = b;
                }else{
                    L2[c] = b;
                }
            }
        }
        ll ans = 0;
        for(ll c = 0; c < n; c++){
            ll left = max(L1[c], c - r + 1);
            ll right = min(L2[c] - 1, c - l + 1);
            if(right >= left){
                ans += right - left + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
