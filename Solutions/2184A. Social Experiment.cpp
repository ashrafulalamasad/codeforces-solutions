#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        if(n == 2) cout << 2 << endl;
        else if(n == 3) cout << 3 << endl;
        else if(n % 2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
