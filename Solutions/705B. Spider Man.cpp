#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll cntEven = 0;
    for(ll i=0; i<n; i++){
        ll a; cin >> a;
        if(a % 2 == 0) cntEven++;
        if(cntEven % 2 == 1) cout << 1 << endl; else cout << 2 << endl;
    }
    return 0;
}
