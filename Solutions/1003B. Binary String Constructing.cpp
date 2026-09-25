#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, x; cin >> a >> b >> x;
    ll zr, or_; char f; string ans;
    if(a >= b){
        f = '0';
        zr = (x + 2) / 2;
        or_ = (x + 1) / 2;
    }else{
        f = '1';
        or_ = (x + 2) / 2;
        zr = (x + 1) / 2;
    }
    ll zi = 0, oi = 0;
    for(ll i = 0; i < x + 1; i++){
        bool isZ = (f == '0') == (i % 2 == 0);
        if(isZ){
            ll take = 1;
            if(zi == 0) take += a - zr;
            ans += string(take, '0');
            zi++;
        }else{
            ll take = 1;
            if(oi == 0) take += b - or_;
            ans += string(take, '1');
            oi++;
        }
    }
    cout << ans << endl;
    return 0;
}
