#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> left(n), right(n);
        for(ll i = 0; i < n; i++) cin >> left[i] >> right[i];
        ll low = 0, high = 1e9;
        while(low < high){
            ll middle = (low + high) / 2;
            ll reachableLeft = 0, reachableRight = 0;
            bool possible = true;
            for(ll i = 0; i < n; i++){
                reachableLeft = max(left[i], reachableLeft - middle);
                reachableRight = min(right[i], reachableRight + middle);
                if(reachableLeft > reachableRight){
                    possible = false;
                    break;
                }
            }
            if(possible) high = middle;
            else low = middle + 1;
        }
        cout << low << endl;
    }
    return 0;
}
