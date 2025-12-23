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
        ll m = *min_element(a.begin(), a.end());
        ll minn = LLONG_MAX;
        for(ll i = 0; i < n; i++){
            if(a[i] == m) continue;
            minn = min(minn, a[i]-m);
        }
        if(minn == LLONG_MAX){
            cout << m << endl;
        }else{
            cout << max(m, minn) << endl;
        }
    }
    return 0;
}
