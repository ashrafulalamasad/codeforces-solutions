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
    ll l = 0, r = n - 1, s = 0, d = 0, turn = 1;
    while(l <= r){
        if(a[l] >= a[r]){
            if(turn) s += a[l];
            else d += a[l];
            l++;
        }else{
            if(turn) s += a[r];
            else d += a[r];
            r--;
        }
        turn ^= 1;
    }
    cout << s << " " << d << endl;
    return 0;
}
