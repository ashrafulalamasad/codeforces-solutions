#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        bool found = false;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x == k){
                found = true;
            }
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
