#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l, r, s; cin >> n >> l >> r >> s;
        ll k = r - l + 1;
        ll mn = k * (k + 1) / 2;
        ll mx = k * (2 * n - k + 1) / 2;
        if(s < mn || s > mx){
            cout << -1 << endl;
            continue;
        }
        vector<ll> a(k);
        for(ll i = 0; i < k; i++) a[i] = i + 1;
        ll diff = s - mn;
        for(ll i = k - 1; i >= 0; i--){
            ll maxVal = n - k + i + 1;
            ll add = min(diff, maxVal - a[i]);
            a[i] += add;
            diff -= add;
        }
        vector<ll> p(n + 1, 0);
        vector<char> used(n + 1, 0);
        for(ll i = 0; i < k; i++){
            p[l + i] = a[i];
            used[a[i]] = 1;
        }
        ll cur = 1;
        for(ll i = 1; i <= n; i++){
            if(p[i] == 0){
                while(used[cur]){
                    cur++;
                }
                p[i] = cur;
                used[cur] = 1;
            }
        }
        for(ll i = 1; i <= n; i++){
            cout << p[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
