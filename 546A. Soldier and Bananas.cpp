#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, n, w; cin >> k >> n >> w;
    ll cost = 0;
    for(ll i=1; i<=w; i++){
        cost += i*k;
    }
    if(cost>n){
        cout << cost - n << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
