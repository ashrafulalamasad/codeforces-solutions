#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, n; cin >> a >> b >> n;
    while(true){
        ll take = gcd(a, n);
        if(n < take){
            cout << 1 << endl;
            return 0;
        }
        n -= take;
        take = gcd(b, n);
        if(n < take){
            cout << 0 << endl;
            return 0;
        }
        n -= take;
    }
    return 0;
}
