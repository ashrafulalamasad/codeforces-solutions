#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        ll negative = 0, zero = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < 0) negative++;
            else if(a[i] == 0) zero++;
        }
        if(zero > 0 || negative % 2 == 1) cout << 0 << endl;
        else{
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
    return 0;
}
