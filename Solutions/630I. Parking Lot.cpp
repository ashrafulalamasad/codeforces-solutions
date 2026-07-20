#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n;
    ll L = 2*n - 2;
    ll ans = 0;
    for(ll j=1; j<=n-1; j++){
        ll left = (j>1) ? 1 : 0;
        ll right = (j + n <= L) ? 1 : 0;
        ll rest = L - n - left - right;
        ll pow4 = 1;
        for(ll i=0; i<rest; i++) pow4 *= 4;
        ll pow3 = 1;
        for(ll i=0; i<left+right; i++) pow3 *= 3;
        ll count_per_letter = pow4 * pow3;
        ans += 4 * count_per_letter;
    }
    cout << ans << endl;
    return 0;
}
