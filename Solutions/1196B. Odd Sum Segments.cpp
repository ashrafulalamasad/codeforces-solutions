#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n), pos;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) if(a[i] % 2 == 1) pos.push_back(i + 1);
        if((ll)pos.size() < k || ((ll)pos.size() - k) % 2 == 1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(ll i = 0; i < k - 1; i++){
                cout << pos[i];
                if(i + 1 < k - 1) cout << " ";
            }
            if(k > 1) cout << " ";
            cout << n << endl;
        }
    }
    return 0;
}
