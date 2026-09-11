#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> f(n), a(n);
        for(ll i = 0; i < n; i++) cin >> f[i];
        ll total = (f[0] + f[n - 1]) / (n - 1);
        a[0] = (total + f[1] - f[0]) / 2;
        a[n - 1] = (total + f[n - 2] - f[n - 1]) / 2;
        for(ll i = 1; i < n - 1; i++){
            a[i] = (f[i - 1] + f[i + 1] - 2 * f[i]) / 2;
        }
        for(ll i = 0; i < n; i++){
            if(i > 0){
                cout << " ";
            }
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
