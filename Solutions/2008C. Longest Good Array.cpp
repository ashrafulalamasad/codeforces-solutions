#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        ll d = r - l, lo = 1, hi = 200000;
        while(lo < hi){
            ll mid = (lo + hi + 1) / 2;
            if(mid * (mid - 1) / 2 <= d) lo = mid;
            else hi = mid - 1;
        }
        cout << lo << endl;
    }
    return 0;
}
