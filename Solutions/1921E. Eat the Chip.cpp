#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll h, w, xa, ya, xb, yb; cin >> h >> w >> xa >> ya >> xb >> yb;
        if(xa >= xb){
            cout << "Draw" << endl;
        }else if((xb - xa) % 2 == 1){
            ll ka = (xb - xa + 1) / 2, kb = (xb - xa) / 2;
            ll al = max(1LL, ya - ka), ar = min(w, ya + ka);
            ll bl = max(1LL, yb - kb), br = min(w, yb + kb);
            if(al <= bl && br <= ar){
                cout << "Alice" << endl;
            }else{
                cout << "Draw" << endl;
            }
        }else{
            ll k = (xb - xa) / 2;
            ll al = max(1LL, ya - k), ar = min(w, ya + k);
            ll bl = max(1LL, yb - k), br = min(w, yb + k);
            if(bl <= al && ar <= br){
                cout << "Bob" << endl;
            }else{
                cout << "Draw" << endl;
            }
        }
    }
    return 0;
}
