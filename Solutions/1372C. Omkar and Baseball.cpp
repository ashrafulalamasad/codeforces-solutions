#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l = -1, r = -1; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            if(a[i] != i + 1){
                if(l == -1) l = i;
                r = i;
            }
        }
        if(l == -1) cout << 0 << endl;
        else{
            ll bad = 0;
            for(ll i = l; i <= r; i++){
                if(a[i] == i + 1) bad = 1;
            }
            if(bad == 1) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}
