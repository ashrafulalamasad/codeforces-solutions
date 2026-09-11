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
        ll x = 0, last = -1;
        for(ll i = 0; i < n; i++){
            if(a[i] != b[i]){
                x ^= 1;
                last = i;
            }
        }
        if(x == 0) cout << "Tie" << endl;
        else if(last % 2 == 0) cout << "Ajisai" << endl;
        else cout << "Mai" << endl;
    }
    return 0;
}
