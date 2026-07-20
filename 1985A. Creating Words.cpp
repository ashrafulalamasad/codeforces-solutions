#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b; cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
    return 0;
}
