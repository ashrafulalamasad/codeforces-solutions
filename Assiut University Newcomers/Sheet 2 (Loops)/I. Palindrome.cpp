#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, rev = 0, tmp; cin >> n;
    tmp = n;
    while(tmp > 0){
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    cout << rev << endl;
    if(rev == n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
