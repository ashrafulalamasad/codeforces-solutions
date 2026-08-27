#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b; cin >> n >> a >> b;
        if(a == 1){
            cout << ((n - 1) % b == 0 ? "Yes" : "No") << endl;
        }else{
            bool ok = false; ll p = 1;
            while(p <= n){
                if((n - p) % b == 0){
                    ok = true;
                    break;
                }
                if(p > n / a) break;
                p *= a;
            }
            cout << (ok ? "Yes" : "No") << endl;
        }
    }
    return 0;
}
