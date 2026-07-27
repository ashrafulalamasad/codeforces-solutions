#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    if(n == 2){
        cout << 1 << endl;
        return 0;
    }
    ll a = 0, b = 1;
    for(ll i = 3; i <= n; i++){
        ll c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;
    return 0;
}
