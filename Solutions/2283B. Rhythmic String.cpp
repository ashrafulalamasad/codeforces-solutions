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
        for(auto &x : a) cin >> x;
        ll best = 0;
        for(ll i = 0; i < n; i++){
            ll c = 0;
            for(ll j = 0; j < n; j++){
                if(a[j] % a[i] == 0) c++;
            }
            best = max(best, c);
        }
        cout << n - best << endl;
    }
}
