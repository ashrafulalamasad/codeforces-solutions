#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll size, x, y; cin >> size >> x >> y;
    ll n = size / 2;
    if((x == n || x == n+1) && (y == n || y == n+1)){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;
}
