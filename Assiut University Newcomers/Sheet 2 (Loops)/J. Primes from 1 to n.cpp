#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 2; i <= n; i++){
        bool prime = 1;
        for(ll j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = 0;
                break;
            }
        }
        if(prime) cout << i << " ";
    }
    cout << endl;
    return 0;
}
