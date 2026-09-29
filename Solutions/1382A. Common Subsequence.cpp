#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        ll common = -1;
        for(ll x : a){
            for(ll y : b){
                if(x == y) common = x;
            }
        }
        if(common == -1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << 1 << " " << common << endl;
        }
    }
    return 0;
}
