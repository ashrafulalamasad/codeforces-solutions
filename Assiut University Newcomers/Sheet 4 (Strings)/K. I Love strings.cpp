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
        ll mx = max(a.size(), b.size());
        string ans = "";
        for(ll i = 0; i < mx; i++){
            if(i < a.size()) cout << a[i];
            if(i < b.size()) cout << b[i];
        }
        cout << endl;
    }
    return 0;
}
