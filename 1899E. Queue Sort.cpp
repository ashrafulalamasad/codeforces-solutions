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
        for(ll i=0; i<n; i++) cin >> a[i];
        if(n==1){cout << 0 << endl; continue;}
        ll mn = *min_element(a.begin(),a.end());
        ll p = -1;
        for(ll i=0; i<n; i++){
            if(a[i] == mn){p = i; break;}
        }
        bool ok = 1;
        for(ll i=p; i+1<n; i++){
            if(a[i] > a[i+1]) ok = 0;
        }
        if(ok) cout << p << endl;
        else cout << -1 << endl;
    }
    return 0;
}
