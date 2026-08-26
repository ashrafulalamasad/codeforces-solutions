#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        ll ok = 0;
        if(n % 2 == 1){
            ll half = m / 2;
            if(k >= half && (k - half) % 2 == 0){
                ok = 1;
            }
        }else{
            if(m % 2 == 0){
                if(k % 2 == 0){
                    ok = 1;
                }
            }else{
                ll mx = (n / 2) * (m - 1);
                if(k % 2 == 0 && k <= mx){
                    ok = 1;
                }
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
