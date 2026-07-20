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
        if(n == 2 || n == 3) {
            cout << -1 << endl;
            continue;
        }
        vector<ll> evens;
        for(ll i = 2; i <= n; i += 2) evens.push_back(i);
        ll k = (n + 1) / 2;
        ll last_even = evens.back();
        ll start_odd = last_even - 3;
        ll s = (start_odd + 1) / 2;
        vector<ll> odd_idx;
        vector<char> vis(k + 1, 0);
        ll cur = s;
        odd_idx.push_back(cur);
        vis[cur] = 1;
        for(ll i = 1; i < k; i++) {
            ll nxt = -1;
            for(ll j = 1; j <= k; j++) {
                if(!vis[j] && (abs(j - cur) == 1 || abs(j - cur) == 2)) {
                    nxt = j;
                    break;
                }
            }
            odd_idx.push_back(nxt);
            vis[nxt] = 1;
            cur = nxt;
        }
        vector<ll> perm = evens;
        for(ll idx : odd_idx) {
            perm.push_back(2 * idx - 1);
        }
        for(ll i = 0; i < n; i++) {
            cout << perm[i];
            if(i < n - 1) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}
