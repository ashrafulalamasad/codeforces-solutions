#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b; cin >> a >> b;
        ll n = a.size(), m = b.size();
        ll best = 0;
        for(ll len = 1; len <= min(n, m); len++){
            for(ll i = 0; i + len <= n; i++){
                for(ll j = 0; j + len <= m; j++){
                    if(a.substr(i, len) == b.substr(j, len)) best = max(best, len);
                }
            }
        }
        cout << n + m - 2 * best << endl;
    }
    return 0;
}
