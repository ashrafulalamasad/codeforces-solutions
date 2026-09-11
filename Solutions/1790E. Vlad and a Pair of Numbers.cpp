#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll x; cin >> x;
        if(x % 2 != 0 || (x & (x / 2)) != 0){
            cout << -1 << endl;
        }else{
            ll a = x | (x / 2);
            ll b = x / 2;
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
