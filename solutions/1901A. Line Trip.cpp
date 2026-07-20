#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x; vector<ll> a(n); 
        for(auto &v : a) cin >> v;
        a.insert(a.begin(), 0); 
        a.push_back(x);
        ll mx = 0;
        for(int i = 1; i <= n+1; i++){
            mx = max(mx, (i == n+1 ? 2*(a[i]-a[i-1]) : a[i]-a[i-1]));
        }
        cout << mx << endl;
    }
    return 0;
}
