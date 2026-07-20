#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        bool ok = false;
        if(m <= n){
            queue<ll> q; q.push(n);
            while(!q.empty()){
                ll x = q.front(); q.pop();
                if(x == m){
                    ok = true; break;
                }
                if(x % 3 == 0){
                    q.push(x / 3);
                    q.push(2 * (x / 3));
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
