#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> p = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    tc{
        ll n; cin >> n;
        ll ans = LLONG_MAX;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            for(ll q: p){
                if(a % q != 0){
                    ans = min(ans, q); break;
                }
            }
        }
        cout << (ans == LLONG_MAX ? -1 : ans) << endl;
    }
    return 0;
}
