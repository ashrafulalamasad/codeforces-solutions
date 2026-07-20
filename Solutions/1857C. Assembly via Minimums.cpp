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
        ll m = n * (n - 1) / 2;
        vector<ll> b(m);
        for(ll i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        ll idx = 0;
        for(ll step = n - 1; step > 0; step--){
            cout << b[idx] << " ";
            idx += step;
        }
        cout << b.back() << endl;
    }
    return 0;
}
