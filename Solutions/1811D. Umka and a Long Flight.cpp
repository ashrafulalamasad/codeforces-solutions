#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> f(50); f[0] = 1; f[1] = 1;
    for(ll i = 2; i < 50; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    tc{
        ll n, x, y; cin >> n >> x >> y;
        ll h = f[n], w = f[n + 1], ok = 1;
        while(h > 1 || w > 1){
            if(h < w){
                ll s = h, rem = w - s;
                if(y > rem && y <= s){
                    ok = 0; break;
                }
                if(y <= rem){
                    w = rem;
                }else{
                    y = y - s; w = rem;
                }
            }else if(h > w){
                ll s = w, rem = h - s;
                if(x > rem && x <= s){
                    ok = 0; break;
                }
                if(x <= rem){
                    h = rem;
                }else{
                    x = x - s; h = rem;
                }
            }else{
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
