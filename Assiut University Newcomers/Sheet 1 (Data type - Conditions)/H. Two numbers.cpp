#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << a / b << endl;
    cout << "ceil " << a << " / " << b << " = " << (a + b - 1) / b << endl;
    cout << "round " << a << " / " << b << " = " << (a + b / 2) / b << endl;
    return 0;
}
