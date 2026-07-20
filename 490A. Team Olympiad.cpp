#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x; cin >> n;
    vector<ll> v1, v2, v3;
    for(ll i=1; i<=n; i++){
        cin >> x;
        (x==1) ? v1.push_back(i) : (x==2) ? v2.push_back(i) : v3.push_back(i);
    }
    ll mn = min({v1.size(), v2.size(), v3.size()});
    cout << mn << endl;
    for(ll i=0; i<mn; i++){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
    return 0;
}
