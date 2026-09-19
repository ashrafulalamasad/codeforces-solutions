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
        if(a[0] != n && a[n - 1] != n) cout << -1 << endl;
        else{
            for(ll i = n - 1; i >= 0; i--){
                if(i < n - 1) cout << " ";
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}
