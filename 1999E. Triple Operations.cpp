#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll N = 200005;
ll f[N], pref[N];

int main()
{
    fast;
    for(ll i=1; i<N; i++){
        ll x = i, cnt = 0;
        while(x){
            x /= 3;
            cnt++;
        }
        f[i] = cnt;
        pref[i] = pref[i-1] + f[i];
    }
    tc{
        ll l, r; cin >> l >> r;
        cout << f[l] + (pref[r] - pref[l-1]) << endl;
    }
    return 0;
}
