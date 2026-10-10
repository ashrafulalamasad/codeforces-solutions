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
        for(ll i = 0; i < n; i++){
            if(a[i] == -1) a[i] = 1;
            if(a[i] == 1) break;
        }
        for(ll i = n - 1; i >= 0; i--){
            if(a[i] == -1) a[i] = 1;
            if(a[i] == 1) break;
        }
        for(ll i = 0; i < n; i++) if(a[i] == -1) a[i] = 0;
        for(ll i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
