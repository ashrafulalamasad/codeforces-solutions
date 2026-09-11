#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> s(n), f(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        for(ll i = 0; i < n; i++) cin >> f[i];
        for(ll i = 0; i < n; i++){
            ll start = s[i];
            if(i > 0 && f[i - 1] > start){
                start = f[i - 1];
            }
            cout << f[i] - start << " ";
        }
        cout << endl;
    }
    return 0;
}
