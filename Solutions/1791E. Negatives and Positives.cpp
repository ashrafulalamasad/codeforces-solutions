#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        ll sum = 0, negcnt = 0, mn = LLONG_MAX;
        for(auto x : a){
            sum += abs(x);
            if(x < 0) negcnt++;
            mn = min(mn, abs(x));
        }
        if(negcnt % 2 == 0) cout << sum << "\n";
        else cout << sum - 2 * mn << "\n";
    }
    return 0;
}
