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
        ll c2 = n/3;
        if(n%3 == 2) c2++;
        ll c1 = n-2*c2;
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}
