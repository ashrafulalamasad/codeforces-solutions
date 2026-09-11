#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> g(n);
        for(ll i = 0; i < n; i++) cin >> g[i];
        ll a = g[0][1] - '0', b = g[1][0] - '0';
        ll c = g[n - 1][n - 2] - '0';
        ll d = g[n - 2][n - 1] - '0';
        ll best = 10, bta = 0, btc = 0;
        for(ll ta = 0; ta <= 1; ta++){
            for(ll tc2 = 0; tc2 <= 1; tc2++){
                if(ta != tc2){
                    ll cost = 0;
                    if(a != ta) cost++;
                    if(b != ta) cost++;
                    if(c != tc2) cost++;
                    if(d != tc2) cost++;
                    if(cost < best){
                        best = cost;
                        bta = ta;
                        btc = tc2;
                    }
                }
            }
        }
        cout << best << endl;
        if(a != bta) cout << 1 << " " << 2 << endl;
        if(b != bta) cout << 2 << " " << 1 << endl;
        if(c != btc) cout << n << " " << n - 1 << endl;
        if(d != btc) cout << n - 1 << " " << n << endl;
    }
    return 0;
}
