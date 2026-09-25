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
        for(ll i = n % 2; i + 1 < n; i += 2){
            if(a[i] > a[i + 1]) swap(a[i], a[i + 1]);
        }
        bool sorted = true;
        for(ll i = 1; i < n; i++){
            if(a[i - 1] > a[i]) sorted = false;
        }
        if(sorted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
