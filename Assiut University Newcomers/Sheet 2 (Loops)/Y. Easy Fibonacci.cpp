#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll a = 0, b = 1;
    if(n >= 1) cout << a;
    if(n >= 2) cout << " " << b;
    for(ll i = 3; i <= n; i++){
        ll c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
