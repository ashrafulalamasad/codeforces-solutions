#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> r(2 * n + 2);
    for(ll i = 1; i <= 2 * n + 1; i++) cin >> r[i];
    for(ll i = 2; i <= 2 * n && k > 0; i += 2){
        if(r[i] - 1 > r[i - 1] && r[i] - 1 > r[i + 1]){
            r[i]--;
            k--;
        }
    }
    for(ll i = 1; i <= 2 * n + 1; i++) cout << r[i] << " ";
    cout << endl;
    return 0;
}
