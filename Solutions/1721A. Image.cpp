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
        set<char> colors(a.begin(), a.end());
        colors.insert(b.begin(), b.end());
        cout << colors.size() - 1 << endl;
    }
    return 0;
}
