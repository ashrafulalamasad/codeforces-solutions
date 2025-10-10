#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll x,y,z; cin >> x >> y >> z;
        ll a = x | z;
        ll b = x | y;
        ll c = y | z;
        if((a & b) == x && (b & c) == y && (a & c) == z){
            cout<<"YES" <<endl;
        }else{
            cout<<"NO" <<endl;
        }
    }
    return 0;
}
