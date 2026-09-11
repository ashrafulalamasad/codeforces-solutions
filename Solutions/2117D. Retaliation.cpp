#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        ll den = n * n - 1;
        ll numX = n * a[n] - a[1];
        ll numY = n * a[1] - a[n];
        if(numX < 0 || numY < 0 || numX % den != 0 || numY % den != 0){
            cout << "NO" << endl;
            continue;
        }
        ll x = numX / den, y = numY / den;
        bool ok = true;
        for(ll i = 1; i <= n; i++){
            if(x * i + y * (n - i + 1) != a[i]){
                ok = false;
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
