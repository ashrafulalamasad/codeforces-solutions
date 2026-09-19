#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, s; cin >> m >> s;
        ll sum = 0, mx = 0;
        for(ll i = 0; i < m; i++){
            ll b; cin >> b;
            sum += b;
            mx = max(mx, b);
        }
        bool ok = false; ll n = mx;
        while(true){
            ll miss = n * (n + 1) / 2 - sum;
            if(miss == s){
                ok = true;
                break;
            }
            if(miss > s) break;
            n++;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
