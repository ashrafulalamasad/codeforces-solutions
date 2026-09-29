#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> used(n + 1, 0), permutation;
        cout << 2 << endl;
        for(ll i = 1; i <= n; i++){
            if(used[i]) continue;
            for(ll value = i; value <= n; value *= 2){
                permutation.push_back(value);
                used[value] = 1;
            }
        }
        for(ll x : permutation) cout << x << " ";
        cout << endl;
    }
    return 0;
}
