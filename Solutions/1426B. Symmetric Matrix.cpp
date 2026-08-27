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
        bool has_sym = false;
        for(ll i = 0; i < n; i++){
            ll a, b, c, d; cin >> a >> b >> c >> d;
            if(b == c) has_sym = true;
        }
        if(m % 2 == 0 && has_sym) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
