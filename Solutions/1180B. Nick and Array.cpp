#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) if(a[i] >= 0) a[i] = -a[i] - 1;
    if(n % 2 == 1){
        ll idx = 0;
        for(ll i = 1; i < n; i++) if(a[i] < a[idx]) idx = i;
        a[idx] = -a[idx] - 1;
    }
    for(ll i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
