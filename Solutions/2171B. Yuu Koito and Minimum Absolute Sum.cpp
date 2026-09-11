#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, mn; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(a[0] == -1 && a[n - 1] == -1){
            mn = 0; a[0] = 0; a[n - 1] = 0;
        }else if(a[0] == -1){
            mn = 0; a[0] = a[n - 1];
        }else if(a[n - 1] == -1){
            mn = 0; a[n - 1] = a[0];
        }else{
            mn = abs(a[n - 1] - a[0]);
        }
        for(ll i = 0; i < n; i++) if(a[i] == -1) a[i] = 0;
        cout << mn << endl;
        for(ll i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    }
    return 0;
}
