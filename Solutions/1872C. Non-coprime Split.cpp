#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        ll s = l;
        if(s < 4) s = 4;
        ll a = -1, b = -1;
        for(ll cur = s; cur <= min(r, s + 1); cur++){
            if(cur % 2 == 0){
                a = cur / 2; b = cur / 2;
                break;
            }
            for(ll p = 3; p * p <= cur; p += 2){
                if(cur % p == 0){
                    a = p; b = cur - p;
                    break;
                }
            }
            if(a != -1) break;
        }
        if(a == -1){
            cout << -1 << endl;
        }else{
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
