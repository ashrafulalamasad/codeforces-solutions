#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> k(n);
        for(ll i = 0; i < n; i++) cin >> k[i];
        ll L = 232792560, sum = 0;
        for(ll i = 0; i < n; i++) sum = sum + L / k[i];
        if(sum >= L) cout << -1 << endl;
        else{
            for(ll i = 0; i < n; i++){
                if(i > 0) cout << " ";
                cout << L / k[i];
            }
            cout << endl;
        }
    }
    return 0;
}
