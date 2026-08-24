#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool check(ll D, const vector<ll>& u, ll x, ll k){
    ll count = 0, m = u.size();
    count += max(0LL, u[0] - D + 1);
    for(ll i = 0; i < m - 1; i++){
        count += max(0LL, u[i + 1] - u[i] - 2 * D + 1);
    }
    count += max(0LL, x - u[m - 1] - D + 1);
    return count >= k;
}

int main()
{
    fast;
    tc{
        ll n, k, x; cin >> n >> k >> x; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        ll m = a.size(), low = 0, high = x, bestD = 0;
        while(low <= high){
            ll mid = low + (high - low) / 2;
            if(check(mid, a, x, k)){
                bestD = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        if(bestD == 0){
            for(ll i = 0; i < k; i++) cout << i << " ";
            cout << endl;
            continue;
        }
        vector<ll> ans; ll L = 0, R = a[0] - bestD;
        for(ll i = L; i <= R && (ll)ans.size() < k; i++){
            ans.push_back(i);
        }
        for(ll i = 0; i < m - 1 && (ll)ans.size() < k; i++){
            L = a[i] + bestD, R = a[i + 1] - bestD;
            for(ll j = L; j <= R && (ll)ans.size() < k; j++){
                ans.push_back(j);
            }
        }
        L = a[m - 1] + bestD, R = x;
        for(ll i = L; i <= R && (ll)ans.size() < k; i++){
            ans.push_back(i);
        }
        for(ll i = 0; i < k; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
