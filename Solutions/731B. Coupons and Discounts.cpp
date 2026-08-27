#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, carry = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    bool ok = true;
    for(ll i = 0; i < n; i++){
        if(carry > a[i]){
            ok = false;
            break;
        }
        carry = (a[i] - carry) % 2;
    }
    if(ok && carry == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
