#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll a = n / 10, b = n % 10;
    if(a != 0 && b != 0 && (a % b == 0 || b % a == 0)) cout << "YES" << endl;
    else if(a == 0 || b == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
