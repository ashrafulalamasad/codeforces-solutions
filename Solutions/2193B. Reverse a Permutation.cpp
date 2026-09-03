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
        for(ll i = 0; i < n; i++) cin >> p[i];
        vector<ll> pos(n); pos[n - 1] = n - 1;
        for(ll i = n - 2; i >= 0; i--) pos[i] = (p[i] >= p[pos[i + 1]] ? i : pos[i + 1]);
        ll l = -1;
        for(ll i = 0; i < n; i++){
            if(p[pos[i]] > p[i]){
                l = i;
                break;
            }
        }
        if(l != -1) reverse(p.begin() + l, p.begin() + pos[l] + 1);
        for(ll i = 0; i < n; i++){
            if(i > 0) cout << " ";
            cout << p[i];
        }
        cout << endl;
    }
    return 0;
}
