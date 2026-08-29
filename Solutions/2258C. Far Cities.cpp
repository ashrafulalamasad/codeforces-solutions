#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    auto ask = [&](ll u, ll v, ll d) -> ll {
        cout << "? " << u << " " << v << " " << d << endl;
        ll r; cin >> r;
        if(r == -1) exit(0);
        return r;
    };
    tc{
        ll n, a = 1, d1 = 0; cin >> n;
        for(ll w = 2; w <= n; w++){
            if(ask(1, w, d1 + 1)){
                a = w; d1++;
                while(ask(1, w, d1 + 1)) d1++;
            }
        }
        ll b = 1, d2 = d1;
        for(ll w = 2; w <= n; w++){
            if(w == a) continue;
            if(ask(a, w, d2 + 1)){
                b = w; d2++;
                while(ask(a, w, d2 + 1)) d2++;
            }
        }
        cout << "! " << a << " " << b << " " << d2 << endl;
    }
    return 0;
}
