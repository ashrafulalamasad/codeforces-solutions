#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll num1, num2, mod; cin >> num1 >> num2 >> mod;
    ll start = min(num1, num2);
    ll result = 1;
    ll end = max(num1, num2);
    for(ll i = start; i <= end; i++){
        result *= i;
        result %= mod;
    }
    cout << result << endl;
    return 0;
}
