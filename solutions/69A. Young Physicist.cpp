#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll sum_x=0, sum_y=0, sum_z=0;
    for(ll i=0; i<n; i++){
        ll x, y, z; cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
