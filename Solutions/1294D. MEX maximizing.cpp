#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll q, x; cin >> q >> x;
    vector<ll> cnt(x, 0);
    ll mex = 0;
    while(q--){
        ll y; cin >> y;
        cnt[y % x]++;
        while(cnt[mex % x] > 0){
            cnt[mex % x]--;
            mex++;
        }
        cout << mex << endl;
    }
    return 0;
}
