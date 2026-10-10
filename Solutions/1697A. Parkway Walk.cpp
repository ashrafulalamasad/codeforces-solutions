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
        vector<ll> a(n); ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum <= m) cout << 0 << endl;
        else cout << sum - m << endl;
    }
    return 0;
}
