#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll x, y, k; cin >> x >> y >> k;
        ll nx = (x + k - 1) / k;
        ll ny = (y + k - 1) / k;
        if(nx > ny) cout << 2 * nx - 1 << endl;
        else cout << 2 * ny << endl;
    }
    return 0;
}
