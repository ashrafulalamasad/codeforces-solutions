#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string x, y;
    if(!(cin >> x)) return 0;
    if(!(cin >> y)){
        cout << x << endl;
        return 0;
    }
    if(x <= y) cout << x << endl;
    else cout << y << endl;
    return 0;
}
