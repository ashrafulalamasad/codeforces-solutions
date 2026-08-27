#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n <= 5){
        cout << -1 << endl;
    }else{
        cout << "1 2" << endl;
        cout << "1 3" << endl;
        cout << "1 4" << endl;
        for(ll i = 5; i <= n; i++) cout << "2 " << i << endl;
    }
    for(ll i = 1; i < n; i++) cout << i << " " << (i + 1) << endl;
    return 0;
}
