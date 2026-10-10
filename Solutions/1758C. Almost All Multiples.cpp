#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x;
        if(n % x != 0) cout << -1 << endl; else{
            vector<ll> p(n + 1, 0);
            for(ll i = 1; i <= n; i++) p[i] = i;
            p[1] = x; p[n] = 1;
            ll cur = x;
            while(cur != n){
                ll rem = n / cur, f = rem;
                for(ll d = 2; d * d <= rem; d++) if(rem % d == 0) f = min(f, d);
                ll nxt = cur * f;
                p[cur] = nxt;
                cur = nxt;
            }
            for(ll i = 1; i <= n; i++) cout << p[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
