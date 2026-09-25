#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    if(n == 1){
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << -a[0] << endl;
        return 0;
    }
    cout << 1 << " " << n << endl;
    for(ll i = 0; i < n; i++){
        cout << -a[i] * n;
        a[i] -= a[i] * n;
        if(i < n - 1) cout << " ";
    }
    cout << endl;
    cout << 1 << " " << n - 1 << endl;
    for(ll i = 0; i < n - 1; i++){
        cout << -a[i];
        a[i] = 0;
        if(i < n - 2) cout << " ";
    }
    cout << endl;
    cout << 2 << " " << n << endl;
    for(ll i = 1; i < n; i++){
        cout << -a[i];
        a[i] = 0;
        if(i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
