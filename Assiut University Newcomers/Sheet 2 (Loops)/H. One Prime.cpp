#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    bool prime = 1;
    if(n < 2) prime = 0;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
