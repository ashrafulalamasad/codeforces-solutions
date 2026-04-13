#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll p, q; cin >> p >> q;
        ll S = p + 2 * q, T = 2 * S + 1;
        bool found = false;
        ll nn = -1, mm = -1;
        for(ll a = 3; a * a <= T; a += 2){
            if(T % a == 0){
                ll b = T / a;
                ll n = (a - 1) / 2;
                ll m = (b - 1) / 2;
                ll H = (n + 1) * m;
                ll V = n * (m + 1);
                if(q <= min(H, V)){
                    found = true;
                    nn = n;
                    mm = m;
                    break;
                }
            }
        }
        if(found){
            cout << nn << " " << mm << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
