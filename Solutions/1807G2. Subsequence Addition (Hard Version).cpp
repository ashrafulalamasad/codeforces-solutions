#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> c(n);
        for(ll i=0; i<n; i++) cin >> c[i];
        sort(c.begin(), c.end());
        if(c[0] != 1){
            cout << "NO" << endl;
            continue;
        }
        ll sum = 1;
        bool ok = true;
        for(ll i=1; i<n; i++){
            if(c[i] > sum){
                ok = false;
                break;
            }
            sum += c[i];
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
