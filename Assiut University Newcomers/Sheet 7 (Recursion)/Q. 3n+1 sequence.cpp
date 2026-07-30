#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll length(ll n){
    if(n == 1) return 1;
    if(n % 2 == 0) return 1 + length(n / 2);
    return 1 + length(3 * n + 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    cout << length(n) << endl;
    return 0;
}
