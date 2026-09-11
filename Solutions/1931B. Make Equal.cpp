#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        ll avg = sum / n;
        bool ok = true;
        ll run = 0;
        for(ll i = 0; i < n; i++){
            run += a[i] - avg;
            if(run < 0) ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
