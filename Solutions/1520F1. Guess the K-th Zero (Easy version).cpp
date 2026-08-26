#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    tc{
        ll k; cin >> k;
        ll lo = 1, hi = n;
        while(lo < hi){
            ll mid = (lo + hi) / 2;
            cout << "? " << 1 << " " << mid << endl;
            ll ones; cin >> ones;
            ll zeros = mid - ones;
            if(zeros >= k){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
        cout << "! " << lo << endl;
    }
    return 0;
}
