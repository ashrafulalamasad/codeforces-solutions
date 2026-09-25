#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s; cin >> n >> s;
        ll cnt[3] = {0, 0, 0};
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cnt[x]++;
        }
        ll sum = cnt[1] + 2 * cnt[2];
        if(s == sum || s >= sum + 2){
            cout << -1 << endl;
            continue;
        }
        for(ll i = 0; i < cnt[0]; i++) cout << 0 << " ";
        for(ll i = 0; i < cnt[2]; i++) cout << 2 << " ";
        for(ll i = 0; i < cnt[1]; i++) cout << 1 << " ";
        cout << endl;
    }
    return 0;
}
