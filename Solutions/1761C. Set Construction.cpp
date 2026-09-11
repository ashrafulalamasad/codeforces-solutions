#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++){
            vector<ll> s; s.push_back(i + 1);
            for(ll j = 0; j < n; j++){
                if(b[j][i] == '1'){
                    s.push_back(j + 1);
                }
            }
            cout << s.size();
            for(ll x : s) cout << " " << x;
            cout << endl;
        }
    }
    return 0;
}
