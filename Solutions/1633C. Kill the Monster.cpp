#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll hc, dc; cin >> hc >> dc;
        ll hm, dm; cin >> hm >> dm;
        ll k, w, a, win = 0; cin >> k >> w >> a;
        for(ll i = 0; i <= k; i++){
            ll nd = dc + i * w;
            ll nh = hc + (k - i) * a;
            ll needM = (hm + nd - 1) / nd;
            ll needC = (nh + dm - 1) / dm;
            if(needM <= needC){
                win = 1;
            }
        }
        if(win == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
