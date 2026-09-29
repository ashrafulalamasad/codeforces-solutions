#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        ll product = 1;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            product = product * a[i];
        }
        if(2023 % product != 0) cout << "NO" << endl;
        else{
            ll rest = 2023 / product;
            cout << "YES" << endl;
            cout << rest << " ";
            for(ll i = 1; i < k; i++) cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
