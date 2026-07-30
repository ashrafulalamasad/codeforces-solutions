#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll a[100001];

void leftMax(ll i, ll n, ll curMax){
    if(i == n) return;
    curMax = max(curMax, a[i]);
    cout << curMax << " ";
    leftMax(i + 1, n, curMax);
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    leftMax(0, n, -1e18);
    return 0;
}
