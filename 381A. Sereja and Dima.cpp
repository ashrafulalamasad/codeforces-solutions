#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll l = 0, r = n-1, s = 0, d = 0, turn = 0, x;
    while(l <= r){
        if(a[l] > a[r]){
            x = a[l]; l++;
        }else{
            x = a[r]; r--;
        }
        if(turn % 2 == 0) s += x;
        else d += x;
        turn++;
    }
    cout << s << " " << d << endl;
    return 0;
}
