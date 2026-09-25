#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, cnt = 1; cin >> n >> k; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++){
            if(p[i] == cnt) cnt++;
        }
        cout << (n - cnt + k) / k << endl;
    }
    return 0;
}
