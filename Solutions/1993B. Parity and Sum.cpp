#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), evens;
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll cntOdd = 0, cntEven = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 1){
                cntOdd++;
                mx = max(mx, a[i]);
            }else{
                cntEven++;
                evens.push_back(a[i]);
            }
        }
        if(cntOdd == 0 || cntEven == 0) cout << 0 << endl;
        else{
            sort(evens.begin(), evens.end());
            ll m = evens.size();
            ll extra = 0;
            for(ll i = 0; i < m; i++){
                if(evens[i] < mx) mx = mx + evens[i];
                else{
                    extra = 1;
                    break;
                }
            }
            cout << cntEven + extra << endl;
        }
    }
    return 0;
}
