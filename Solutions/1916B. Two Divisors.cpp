#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        if(b % a == 0) cout << b * (b / a) << endl;
        else cout << a * b / gcd(a, b) << endl;
    }
    return 0;
}
