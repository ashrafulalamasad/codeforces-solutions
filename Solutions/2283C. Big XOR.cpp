#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, v = 0, h = 0; cin >> n;
        vector<ll> d(n, 0);
        for(ll i = 1; i <= n; i++) v ^= i;
        while((1LL << (h + 1)) <= n) h++;
        for(ll j = h; j >= 0; j--){
            if(!((v >> (j + 1)) & 1)){
                v ^= 3LL << j;
                d[(1LL << j) - 1] = 1;
            }
        }
        for(ll i = 0; i < n; i++) cout << d[i] << " ";
        cout << endl;
    }
}
