#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, l; cin >> a >> b >> l;
        vector<ll> v;
        for(ll pa = 1; pa <= l; pa *= a){
            if(l % pa != 0) continue;
            ll m = l / pa;
            for(ll pb = 1; pb <= m; pb *= b){
                if(m % pb == 0) v.push_back(m / pb);
            }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        cout << v.size() << endl;
    }
    return 0;
}
