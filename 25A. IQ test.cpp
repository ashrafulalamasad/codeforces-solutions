#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll even = 0, odd = 0;
    for(ll i = 0; i < 3; i++){
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    ll diff_parity = (even > odd) ? 1 : 0;
    for(ll i = 0; i < n; i++){
        if(a[i] % 2 == diff_parity){
            cout << i+1;
            break;
        }
    }
    return 0;
}
