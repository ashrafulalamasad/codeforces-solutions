#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n >= 0){
        cout << n << endl;
        return 0;
    }
    ll a = n / 10;
    ll b = (n / 100) * 10 + n % 10;
    cout << max(a, b) << endl;
    return 0;
}
