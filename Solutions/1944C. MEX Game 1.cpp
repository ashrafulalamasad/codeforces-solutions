#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, mex = 0; cin >> n;
        vector<ll> cnt(n + 1, 0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x <= n) cnt[x] = cnt[x] + 1;
        }
        while(mex <= n && cnt[mex] > 0) mex = mex + 1;
        ll first = -1, second = -1;
        for(ll i = 0; i < mex; i++){
            if(cnt[i] == 1 && first == -1) first = i;
            else if(cnt[i] == 1 && second == -1) second = i;
        }
        if(second == -1) cout << mex << endl;
        else cout << second << endl;
    }
    return 0;
}
