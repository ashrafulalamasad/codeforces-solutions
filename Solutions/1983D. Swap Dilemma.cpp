#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<ll> sa = a, sb = b; ll same = 1;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        for(ll i = 0; i < n; i++) if(sa[i] != sb[i]) same = 0;
        if(same == 0) cout << "NO" << endl;
        else{
            map<ll, ll> pos;
            for(ll i = 0; i < n; i++) pos[a[i]] = i;
            vector<ll> p(n), vis(n, 0);
            for(ll i = 0; i < n; i++) p[i] = pos[b[i]];
            ll cycles = 0;
            for(ll i = 0; i < n; i++){
                if(vis[i] == 1) continue;
                cycles++;
                ll j = i;
                while(vis[j] == 0){
                    vis[j] = 1;
                    j = p[j];
                }
            }
            if((n - cycles) % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
