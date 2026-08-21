#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll a = n / 2, b = n - a;
    cout << a * b << endl;
    for(ll i = 1; i <= a; i++){
        for(ll j = a + 1; j <= n; j++){
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
