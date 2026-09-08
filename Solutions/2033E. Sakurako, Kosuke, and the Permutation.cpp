#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++){
            cin >> p[i]; p[i]--;
        }
        vector<bool> v(n); ll ans = 0;
        for(ll i = 0; i < n; i++){
            if(v[i]) continue;
            ll vertex = i, length = 0;
            while(!v[vertex]){
                v[vertex] = true;
                vertex = p[vertex];
                length++;
            }
            ans += (length - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
