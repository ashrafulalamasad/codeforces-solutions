#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll r, s, p;
        cin >> r >> s >> p;
        ll n = r + s + p;
        char c;
        if(s >= p) c = 'R';
        else if(p >= r) c = 'S';
        else c = 'P';
        cout << string(n, c) << endl;
    }
    return 0;
}
