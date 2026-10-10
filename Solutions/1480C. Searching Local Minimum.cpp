#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n == 1) cout << "! 1" << endl;
    if(n > 1){
        ll l = 1, r = n;
        while(l < r){
            ll m = (l + r) / 2;
            cout << "? " << m << endl;
            ll xm; cin >> xm;
            cout << "? " << m + 1 << endl;
            ll xm1; cin >> xm1;
            if(xm < xm1) r = m; else l = m + 1;
        }
        cout << "! " << l << endl;
    }
    return 0;
}
