#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    tc{
        ll n, a = 1, b = 2, c = 3; cin >> n;
        if(n == -1) return 0;
        while(true){
            cout << "? " << a << " " << b << " " << c << endl;
            ll p; cin >> p;
            if(p == -1) return 0;
            if(p == 0) break;
            ll r = rng() % 3;
            if(r == 0){
                a = p;
            }else if(r == 1){
                b = p;
            }else{
                c = p;
            }
        }
        cout << "! " << a << " " << b << " " << c << endl;
    }
    return 0;
}
