#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c; cin >> a >> b >> c;
        if((a+b)>=10 || (b+c)>=10 || (a+c)>=10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
