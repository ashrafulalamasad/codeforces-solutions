#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    unsigned long long result = 0, power = 1;
    for(ll i = 1; i <= n; i++){
        power *= 2;
        result += power;
    }
    cout << result << endl;
    return 0;
}
