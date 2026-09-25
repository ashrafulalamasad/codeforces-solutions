#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x, y; cin >> n >> x >> y; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        vector<ll> outside, inside, rot, ans;
        for(ll i = 0; i < n; i++){
            if(i < x || i >= y) outside.push_back(p[i]);
            else inside.push_back(p[i]);
        }
        ll m = y - x;
        ll pos = min_element(inside.begin(), inside.end()) - inside.begin();
        ll mn = inside[pos];
        for(ll i = 0; i < m; i++) rot.push_back(inside[(pos + i) % m]);
        ll d = n - m, k = 0;
        while(k < d && outside[k] < mn) k++;
        for(ll i = 0; i < k; i++) ans.push_back(outside[i]);
        for(ll i = 0; i < m; i++) ans.push_back(rot[i]);
        for(ll i = k; i < d; i++) ans.push_back(outside[i]);
        for(ll i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
