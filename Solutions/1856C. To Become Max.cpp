#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool check(vector<ll>& a, ll k, ll mid){
    ll n = a.size();
    for(ll i = n - 1; i >= 0; i--){
        ll cost = 0;
        bool chainStopped = false;
        for(ll j = i; j < n; j++){
            ll target = mid - (j - i);
            if(a[j] >= target){
                chainStopped = true;
                break;
            }
            if(j == n - 1) break;
            cost += target - a[j];
            if(cost > k) break;
        }
        if(chainStopped && cost <= k) return true;
    }
    return false;
}

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll mx = *max_element(a.begin(), a.end());
        ll lo = mx, hi = mx + k, ans = mx;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            if(check(a, k, mid)){
                ans = mid;
                lo = mid + 1;
            }else hi = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
