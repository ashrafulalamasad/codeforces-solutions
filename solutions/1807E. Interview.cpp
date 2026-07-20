#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n+1), p(n+1);
        for(ll i=1; i<=n; i++){
            cin >> a[i];
            p[i] = p[i-1] + a[i];
        }
        ll l = 1, r = n;
        while(l < r){
            ll mid = (l+r)/2;
            cout << "? " << mid-l+1;
            for(ll i=l; i<=mid; i++) cout << " " << i;
            cout << endl; cout.flush();
            ll x; cin >> x;
            if(x > p[mid] - p[l-1]) r = mid;
            else l = mid + 1;
        }
        cout << "! " << l << endl; cout.flush();
    }
    return 0;
}
