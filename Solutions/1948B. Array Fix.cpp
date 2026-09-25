#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll last = 100; bool ok = true;
        for(ll i = n - 1; i >= 0; i--){
            if(a[i] <= last) last = a[i];
            else{
                if(a[i] < 10) ok = false;
                else{
                    ll d1 = a[i] / 10, d2 = a[i] % 10;
                    if(d1 > d2 || d2 > last) ok = false;
                    else last = d1;
                }
                if(ok == false) break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
