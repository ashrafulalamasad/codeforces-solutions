#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(2 * n), b(n);
        for(ll i = 0; i < 2 * n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());
        ll ok = 1; vector<ll> dval(n, 0);
        for(ll i = 0; i < n; i++){
            if(a[2 * i] != a[2 * i + 1]) ok = 0;
            b[i] = a[2 * i];
        }
        if(ok == 1){
            for(ll i = 1; i < n; i++){
                if(b[i - 1] == b[i]) ok = 0;
                else if((b[i - 1] - b[i]) % (2 * (n - i)) != 0) ok = 0;
                else dval[i] = (b[i - 1] - b[i]) / 2 / (n - i);
            }
        }
        if(ok == 1){
            for(ll i = 1; i < n; i++) b[n - 1] = b[n - 1] - 2 * i * dval[i];
            if(b[n - 1] <= 0) ok = 0;
            else if(b[n - 1] % (2 * n) != 0) ok = 0;
        }
        if(ok == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
