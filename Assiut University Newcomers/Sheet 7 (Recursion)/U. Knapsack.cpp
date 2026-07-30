#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll weight[21], value[21];

ll knap(ll n, ll w){
    if(n == 0 || w == 0) return 0;
    if(weight[n - 1] > w) return knap(n - 1, w);
    return max(knap(n - 1, w), value[n - 1] + knap(n - 1, w - weight[n - 1]));
}

int main()
{
    fast;
    ll n, w; cin >> n >> w;
    for(ll i = 0; i < n; i++) cin >> weight[i] >> value[i];
    cout << knap(n, w) << endl;
    return 0;
}
