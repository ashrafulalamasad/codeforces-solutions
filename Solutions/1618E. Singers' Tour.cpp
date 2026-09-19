#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n; vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) sum = sum + b[i];
        ll denom = n * (n + 1) / 2; ll total = 0;
        vector<ll> a(n); bool ok = true;
        if(sum % denom != 0) ok = false;
        if(ok) total = sum / denom;
        for(ll i = 0; i < n; i++){
            if(ok){
                ll prev = b[(i - 1 + n) % n];
                ll cur = total + prev - b[i];
                if(cur <= 0 || cur % n != 0) ok = false;
                else a[i] = cur / n;
            }
        }
        for(ll i = 0; i < n; i++){
            if(a[i] < 1 || a[i] > 1000000000) ok = false;
        }
        if(ok == false) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(ll i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
