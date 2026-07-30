#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll mn = (n + 1) / 2;
    for(ll i = mn; i <= n; i++){
        if(i % m == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
